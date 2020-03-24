#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gtscmdfactory.h"
#include "gtscmd.h"
#include "datamanager.h"

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QList>
#include <QThread>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->txtDeviceCmd->setPlainText(QSysInfo::buildAbi());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_btnLinkDevice_clicked()
{
    QString ip = ui->txtDeviceIp->text();
    qint32 port=ui->txtDevicePort->text().toInt();
    QObject::connect(&gtsClient,SIGNAL(signal_device_connected()),this,SLOT(on_device_connected()));
    QObject::connect(&gtsClient,SIGNAL(signal_device_disconnected()),this,SLOT(on_device_disconnected()));
    QObject::connect(&gtsClient,SIGNAL(signal_device_response(QString)),this,SLOT(on_device_response(QString)));
    QObject::connect(&dataManager,SIGNAL(signal_received_data(DFData)),this,SLOT(on_device_response_data(DFData)));

    gtsClient.ConnectDevice(ip,port);
    //dataManager.ConnectDevice(ip,port+10);



}

void MainWindow::on_device_connected()
{
    ui->txtDeviceResponse->appendPlainText("success to connect the device ... \n");
    ui->btnLinkDevice->setEnabled(false);
    QString rs=this->dataListener.Start(this->gtsClient.tcpsocket.localAddress().toString(),this->gtsClient.tcpsocket.localPort()+1);
    ui->txtDeviceResponse->appendPlainText(rs);
}

void MainWindow::on_device_disconnected()
{
    ui->txtDeviceResponse->appendPlainText("failed to connect the device ... \n");
    ui->btnLinkDevice->setEnabled(true);
}

void MainWindow::on_device_response(QString response)
{
    ui->txtDeviceResponse->appendPlainText(response);
    this->cmdIndex++;
    this->SendCmd(this->cmdIndex);
}

void MainWindow::on_device_response_data(DFData response)
{
    ui->txtDeviceResponse->appendPlainText(response.ToString());
    //数据优化在这里
    //
}


void MainWindow::on_btnSendCmd_clicked()
{
    QString cmd=ui->txtDeviceCmd->toPlainText();
    //获取测向指令模板

    QFile file(QCoreApplication::applicationDirPath()+"/startcmd");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
       ui->txtDeviceResponse->appendPlainText("can not find cmd template");
       return;
    }

    QString ip=this->gtsClient.tcpsocket.localAddress().toString();
    unsigned int port =this->gtsClient.tcpsocket.localPort()+1;
    QString portstr;
    portstr.setNum(port);
    while (!file.atEnd()) {
        QString line = QString(file.readLine());
        line.replace("@deviceip",ip);
        line.replace("@deviceport",portstr);
        this->cmdList.push_back(line);
    }

    this->cmdIndex=0;
    this->SendCmd(this->cmdIndex);
}
void MainWindow::SendCmd(int i)
{
    if(i<this->cmdList.count())
    {
        GtsCmd gtscmd(this->cmdList[i]);
        this->gtsClient.SendCmd(gtscmd);
    }
}


void MainWindow::on_btnRmtpListen_clicked()
{
    qint32 port =ui->txtRmtpPort->text().toInt();
    QObject::connect(&rmtpserver,SIGNAL(signal_received_cmd(QString)),this,SLOT(on_rmtpserver_receivedcmd(QString)));
    QString rs=this->rmtpserver.Start(port);
    ui->txtRmtpResponse->append(rs);
}

void MainWindow::on_rmtpserver_receivedcmd(QString cmd)
{
    ui->txtRmtpCmd->setText(cmd);
    ui->txtDeviceCmd->setPlainText(cmd);
    GtsCmdFactory factory;
    GtsCmd dfcmd=factory.CreateDFCmd(cmd);
    this->gtsClient.SendCmd(dfcmd);
}

void MainWindow::on_btnOptimize_clicked()
{
    //开启数据库，接收优化数据
    QSqlDatabase database =QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("opt");
    if(database.open())
    {
        QSqlQuery query;
        query.prepare("select * from optrange");
        if(query.exec())
        {
            while (query.next()) {
                     this->optObj.freqmin = query.value(0).toReal();
                     this->optObj.freqmax = query.value(1).toReal();
                     this->optObj.optmode=query.value(2).toString();
                     this->optObj.dfvalue=query.value(3).toReal();
                     this->optObj.dfoffset=query.value(4).toReal();
                     this->optObj.qualityvalue=query.value(5).toReal();
                     this->optObj.qualityoffset=query.value(6).toReal();
                     this->optObj.levelvalue=query.value(7).toReal();
                     this->optObj.leveloffset=query.value(8).toReal();
                 }
        }
    ui->txtDeviceResponse->appendPlainText(optObj.ToString());
    }
}
