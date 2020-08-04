#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rmtpcmdfactory.h"
#include "rmtpcmd.h"
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
    qint32 dataPort=ui->txtDataPort->text().toInt();
    QObject::connect(&gtsClient,SIGNAL(signal_device_connected()),this,SLOT(on_device_connected()));
    QObject::connect(&gtsClient,SIGNAL(signal_device_disconnected()),this,SLOT(on_device_disconnected()));
    QObject::connect(&gtsClient,SIGNAL(signal_device_response(QString)),this,SLOT(on_device_response(QString)));
    QObject::connect(&dataManager,SIGNAL(signal_received_data(DFData)),this,SLOT(on_device_response_data(DFData)));
    QObject::connect(&rmtpserver,SIGNAL(signal_FIXDF(shared_ptr<RmtpCmdFixDFParam>)),this,SLOT(on_rmtpserver_fixdf(shared_ptr<RmtpCmdFixDFParam>)));

    gtsClient.ConnectDevice(ip,port);
    dataManager.ConnectDevice(ip,dataPort);
}

void MainWindow::on_device_connected()
{
    ui->txtDeviceResponse->appendPlainText("success to connect the device ... \n");
    ui->btnLinkDevice->setEnabled(false);
    //QString rs=this->dataListener.Start(this->gtsClient.tcpsocket.localAddress().toString(),this->gtsClient.tcpsocket.localPort()+1);
    //ui->txtDeviceResponse->appendPlainText(rs);
}

void MainWindow::GetCmdTemplate(QString filename)
{
    //获取指令模板
    this->cmdIndex=0;
    this->cmdList.clear();
    QFile file(QCoreApplication::applicationDirPath()+"/"+filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
       ui->txtDeviceResponse->appendPlainText("can not find cmd template");
       return;
    }

    //QString local_ip=this->gtsClient.tcpsocket.localAddress().toString();
    //unsigned int local_port =this->gtsClient.tcpsocket.localPort()+1;
    QString local_ip=this->dataManager.tcpsocket.localAddress().toString();
    unsigned int local_port =this->dataManager.tcpsocket.localPort();
    QString portstr;
    portstr.setNum(local_port);
    while (!file.atEnd()) {
        QString line = QString(file.readLine());
        line.replace("@deviceip",local_ip);
        line.replace("@deviceport",portstr);
        this->cmdList.push_back(line);
    }
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
    if(this->cmdIndex<this->cmdList.count())
    {
        this->SendCmd(this->cmdIndex);
    }
}

void MainWindow::on_device_response_data(DFData response)
{
    //ui->txtDeviceResponse->appendPlainText(response.ToString());
    ui->txtDeviceResponse->setPlainText(response.ToString());
    //数据优化在这里
    //
}

//开始测向
void MainWindow::on_btnSendCmd_clicked()
{
    this->GetCmdTemplate("startcmd");
    this->SendCmd(0);
}
void MainWindow::SendCmd(int i)
{
    if(i<this->cmdList.count())
    {
        GtsCmd gtscmd(this->cmdList[i]);
        this->gtsClient.SendCmd(gtscmd.GetCmdContent());
    }
}
//停止测向
void MainWindow::on_btnStop_clicked()
{
    this->GetCmdTemplate("stopcmd");
    this->SendCmd(0);
}


void MainWindow::on_btnRmtpListen_clicked()
{
    qint32 port =ui->txtRmtpPort->text().toInt();
    QObject::connect(&rmtpserver,SIGNAL(signal_received_cmd(QString)),this,SLOT(on_rmtpserver_receivedcmd(QString)));
    QString ip=ui->txtRmtpIP->text();
    QString rs=this->rmtpserver.Start(ip,port);
    ui->txtRmtpResponse->append(rs);
}

void MainWindow::on_rmtpserver_receivedcmd(QString cmd)
{
    ui->txtRmtpCmd->setText(cmd);
    ui->txtDeviceCmd->setPlainText(cmd);
    RmtpCmdFactory factory;
    shared_ptr<RmtpCmd> cmdptr=factory.CreateCmd(cmd);
    this->gtsClient.SendCmd(cmdptr->GetResponse());
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


void MainWindow::on_btnRmtpStop_clicked()
{
    rmtpserver.Stop();
    ui->txtRmtpResponse->append("RMTP Stop Listening");
}

void MainWindow::on_rmtpserver_fixdf(shared_ptr<RmtpCmdFixDFParam> ptr)
{
    this->GetCmdTemplate("startcmd");
    this->SendCmd(0);
}
