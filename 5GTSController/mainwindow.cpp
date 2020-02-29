#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gtscmdfactory.h"
#include "gtscmd.h"
#include "datamanager.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->txtDeviceCmd->setPlainText(QSysInfo::buildAbi());
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
