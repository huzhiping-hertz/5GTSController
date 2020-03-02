#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gtscmdfactory.h"
#include "gtscmd.h"
#include "datamanager.h"

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

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
    dataManager.ConnectDevice(ip,port+10);

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
    ui->txtDeviceResponse->setPlainText(optObj.ToString());
    }

}

void MainWindow::on_device_connected()
{
    ui->txtDeviceResponse->setPlainText("Connected device ... \n");
    ui->btnLinkDevice->setEnabled(false);
}

void MainWindow::on_device_disconnected()
{
    ui->txtDeviceResponse->setPlainText("Disconnected device ... \n");
    ui->btnLinkDevice->setEnabled(true);
}

void MainWindow::on_device_response(QString response)
{
    ui->txtDeviceResponse->appendPlainText(response);
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
    GtsCmd gtscmd(cmd);
    this->gtsClient.SendCmd(gtscmd);
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
