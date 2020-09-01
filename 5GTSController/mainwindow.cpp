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
#include "qwt_dial_needle.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //connect(ui->menuBar,SIGNAL(triggered(QAction*)),this,SLOT(on_actionInfo_clicked(QAction*)));
    dial_needle= new QwtDialSimpleNeedle(QwtDialSimpleNeedle::Arrow, true, Qt::yellow, Qt::darkGray);
    ui->DialDegree->setNeedle(dial_needle);

    ui->lcdFreq->setPalette(Qt::green);
    ui->lcdDegree->setPalette(Qt::green);
    ui->lcdLevel->setPalette(Qt::green);
    ui->lcdQuality->setPalette(Qt::green);
    ui->lcdSignal->setPalette(Qt::green);

    ui->ThermoLevel->setFillBrush(QBrush(Qt::blue));
    SetAtennaInfo();
    this->isOpt=false;
    //ui->txtDeviceCmd->setPlainText(QSysInfo::buildAbi());

    this->dfpans.push_back("12.5Hz");
    this->dfpans.push_back("20Hz");
    this->dfpans.push_back("25Hz");
    this->dfpans.push_back("31.25Hz");
    this->dfpans.push_back("50Hz");
    this->dfpans.push_back("62.5Hz");
    this->dfpans.push_back("100Hz");
    this->dfpans.push_back("125Hz");
    this->dfpans.push_back("200Hz");
    this->dfpans.push_back("250Hz");
    this->dfpans.push_back("312.5Hz");
    this->dfpans.push_back("500Hz");
    this->dfpans.push_back("625Hz");
    this->dfpans.push_back("1kHz");
    this->dfpans.push_back("1.25kHz");
    this->dfpans.push_back("2kHz");
    this->dfpans.push_back("2.5kHz");
    this->dfpans.push_back("3.125kHz");
    this->dfpans.push_back("5kHz");
    this->dfpans.push_back("6.25kHz");
    this->dfpans.push_back("8.333kHz");
    this->dfpans.push_back("12.5kHz");
    this->dfpans.push_back("20kHz");
    this->dfpans.push_back("25kHz");
    this->dfpans.push_back("50kHz");
    this->dfpans.push_back("100kHz");
    this->dfpans.push_back("200kHz");
    this->dfpans.push_back("500kHz");
    this->dfpans.push_back("1MHz");
    this->dfpans.push_back("2Mhz");

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
    QObject::connect(&dataManager,&DataManager::signal_received_data,&rmtpserver,&RmtpServer::on_get_monitor_data);

    QObject::connect(&rmtpserver,SIGNAL(signal_FIXDF(shared_ptr<RmtpCmdFixDFParam>)),this,SLOT(on_rmtpserver_fixdf(shared_ptr<RmtpCmdFixDFParam>)));
    QObject::connect(&rmtpserver,SIGNAL(signal_STOP()),this,SLOT(on_rmtpserver_stop()));

    gtsClient.ConnectDevice(ip,port+8);
    dataManager.ConnectDevice(ip,port+10);
}

void MainWindow::on_device_connected()
{
    ui->txtDeviceResponse->appendPlainText("5GT Device connected...");
    ui->btnLinkDevice->setEnabled(false);
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

    ui->txtFreq->setText(QString::number(obj.frequency));
    ui->txtIFBW->setText(QString::number(obj.ifpan));
    QString tmp=obj.dfpan;
    ui->cbBW->setCurrentText(tmp.replace("P",".").replace("Z","z").replace("K","k"));
    ui->txtSpan->setText(QString::number(obj.range));
    ui->cbAtenna->setCurrentText(obj.antenna);
    ui->cbPolar->setCurrentText(obj.polorization);

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
        line.replace("@frequency",QString::number(obj.frequency*1000000,'f',0));
        line.replace("@ifpan",QString::number(obj.ifpan));
        line.replace("@dfpan",obj.dfpan);
        line.replace("@span",QString::number(obj.range));
        line.replace("@antenna",obj.antenna);
        line.replace("@freqBegin",QString::number(obj.freqBegin));
        line.replace("@freqEnd",QString::number(obj.freqEnd));
        line.replace("@polorization",obj.polorization);
        line.replace("@mode",obj.demode);
        this->cmdList.push_back(line);
        ui->txtDeviceResponse->appendPlainText(line);
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
    //ui->txtDeviceResponse->setPlainText(response.ToString());
    ui->lcdFreq->display(qreal(response.frequency)/1000000);
    ui->lcdSignal->display(response.level);
    ui->lcdLevel->display(response.strength);
    ui->lcdDegree->display(response.bearing);
    ui->lcdQuality->display(response.quality);
    ui->ThermoLevel->setValue(response.level);
    ui->DialDegree->setValue(response.bearing);
    //数据优化在这里
    //
}

//开始测向
void MainWindow::on_btnSendCmd_clicked()
{
    this->obj.frequency=ui->txtFreq->text().toDouble();
    this->obj.ifpan=ui->txtIFBW->text().toDouble();
    this->obj.dfpan=ui->cbBW->currentText().toUpper().replace(".","P");
    this->obj.demode=ui->combDeMode->currentText();
    this->obj.polorization=ui->cbPolar->currentText();
    this->obj.range=ui->txtSpan->text().toInt();
    this->obj.SelectAntenna(this->atennas,this->obj.polorization);
    this->GetCmdTemplate("startcmd");
    this->SendCmd(0);
    this->ui->btnSendCmd->setDisabled(true);
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
    this->ui->btnSendCmd->setDisabled(false);
}


void MainWindow::on_btnRmtpListen_clicked()
{
    qint32 port =ui->txtRmtpPort->text().toInt();
    QObject::connect(&rmtpserver,SIGNAL(signal_received_cmd(QString)),this,SLOT(on_rmtpserver_receivedcmd(QString)));
    QString ip=ui->txtRmtpIP->text();
    QString rs=this->rmtpserver.Start(ip,port);
    ui->txtDeviceResponse->appendPlainText(rs);
    ui->btnRmtpListen->setDisabled(true);
    ui->btnRmtpStop->setDisabled(false);
}

void MainWindow::on_rmtpserver_receivedcmd(QString cmd)
{
    ui->txtDeviceResponse->setPlainText(cmd);
    ui->txtDeviceResponse->setPlainText(cmd);
}

void MainWindow::on_btnOptimize_clicked()
{
    if(this->isOpt==true)
    {
        this->optObj.Clear();
        this->isOpt=false;
        this->dataManager.SetOptValue(this->optObj);
        setWindowTitle("5GTS Controller ");
    }
    else
    {
        SetOptObj(ui->txtFreq->text().toDouble()*1000000);

    }
}

void MainWindow::SetOptObj(qint64 freq)
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
                this->optObj.dfvalue=query.value(2).toReal();
                this->optObj.dfoffset=query.value(3).toReal();
                this->optObj.qualitythreashold=query.value(4).toReal();
                if(freq>=this->optObj.freqmin && freq<this->optObj.freqmax)
                {
                    this->dataManager.SetOptValue(this->optObj);
                    setWindowTitle("5GTS Controller.");
                    this->isOpt=true;
                }
            }
        }
    }
}

void MainWindow::SetAtennaInfo()
{
    QSqlDatabase database =QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("opt");
    if(database.open())
    {
        QSqlQuery query;
        query.prepare("select * from Atenna");
        if(query.exec())
        {
            while (query.next()) {
                AtennaInfo atenna ;
                atenna.AtennaName = query.value(0).toString();
                atenna.FreqMin = query.value(1).toLongLong();
                atenna.FreqMax=query.value(2).toLongLong();
                atenna.Polor = query.value(3).toString();
                atennas.push_back(atenna);
                this->ui->cbAtenna->addItem(atenna.AtennaName);
            }
        }

    }
}

QString MainWindow::GetRightDFSpan(qreal dfpan)
{
    QString rs;
    qreal minus=10000000;

    foreach (QString item, dfpans) {

        qreal current=0;
        if(item.contains("MHz"))
        {
            QString df=item;
            current=df.replace("MHz","").trimmed().toDouble()*1000000;
            if(qFabs(current-dfpan)<minus)
            {
                rs=item;
                minus=qFabs(current-dfpan);
            }

        }else if(item.contains("kHz"))
        {
            QString df=item;
            current=df.replace("kHz","").trimmed().toDouble()*1000;
            if(qFabs(current-dfpan)<minus)
            {
                rs=item;
                minus=qFabs(current-dfpan);
            }
        }else if(item.contains("Hz"))
        {
            QString df=item;
            current=df.replace("Hz","").trimmed().toDouble();
            if(qFabs(current-dfpan)<minus)
            {
                rs=item;
                minus=qFabs(current-dfpan);
            }
        }
    }
    return rs.toUpper().replace(".","P");
}


void MainWindow::on_btnRmtpStop_clicked()
{
    rmtpserver.Stop();
    ui->txtDeviceResponse->appendHtml("<b style='color:#f00'>RmtpServer Stop Listening...</b>");
    ui->btnRmtpListen->setDisabled(false);
    ui->btnRmtpStop->setDisabled(true);
}

void MainWindow::on_rmtpserver_fixdf(shared_ptr<RmtpCmdFixDFParam> ptr)
{
    this->obj.frequency=ptr->Frequency/1000000.0;
    this->obj.ifpan=ptr->IFBandWidth/1000;
    this->obj.dfpan=GetRightDFSpan(ptr->DFBandWidth);
    this->obj.demode=ptr->DeMode;
    this->obj.polorization=ptr->Polar;
    this->obj.range=500;
    this->obj.SelectAntenna(this->atennas,ptr->Polar);
    this->SetOptObj(this->obj.frequency*1000000);
    this->GetCmdTemplate("startcmd");
    this->SendCmd(0);
}

void MainWindow::on_rmtpserver_stop()
{
    this->GetCmdTemplate("stopcmd");
    this->SendCmd(0);
}

void MainWindow::on_btnUnlinkDevice_clicked()
{
    this->gtsClient.DisConnectDevice();
    this->dataManager.DisConnectDevice();
    ui->btnLinkDevice->setEnabled(true);
}

void MainWindow::on_actionInfo_clicked(QAction* action)
{
    if(action->text()=="Info")
    {
        versionptr=new VersionWindow(this);
        versionptr->show();
    }
}
