#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gtsclient.h"
#include "rmtpserver.h"
#include "datamanager.h"
#include "datalistener.h"
#include "dfdata.h"
#include "optobj.h"
#include <QList>
#include "rmtpcmdfixdfparam.h"
#include <memory>
#include "qwt_dial_needle.h"
using namespace std;

namespace Ui {
class MainWindow;
}

struct paramObj
{
    qreal frequency;
    qint32 ifpan;
    qint32 dfpan;
    QString demode;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    GtsClient gtsClient;
    RmtpServer rmtpserver;
    DataManager dataManager;
    DataListener dataListener;
    OptObj optObj;
    QList<QString> cmdList;
    int cmdIndex=0;
    QwtDialNeedle *dial_needle;
    paramObj obj;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    void SendCmd(int i);
    void GetCmdTemplate(QString filename);
private slots:

    void on_btnLinkDevice_clicked();
    void on_device_connected();
    void on_device_disconnected();
    void on_device_response(QString response);
    void on_device_response_data(DFData response);

    void on_btnSendCmd_clicked();
    void on_btnRmtpListen_clicked();

    void on_rmtpserver_receivedcmd(QString cmd);

    void on_btnOptimize_clicked();

    void on_btnStop_clicked();

    void on_btnRmtpStop_clicked();
    void on_rmtpserver_fixdf(shared_ptr<RmtpCmdFixDFParam>ptr);

    void on_btnUnlinkDevice_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
