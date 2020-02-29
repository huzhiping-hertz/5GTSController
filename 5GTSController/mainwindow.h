#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gtsclient.h"
#include "rmtpserver.h"
#include "datamanager.h"
#include "dfdata.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    GtsClient gtsClient;
    RmtpServer rmtpserver;
    DataManager dataManager;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_btnLinkDevice_clicked();
    void on_device_connected();
    void on_device_disconnected();
    void on_device_response(QString response);
    void on_device_response_data(DFData response);

    void on_btnSendCmd_clicked();
    void on_btnRmtpListen_clicked();

    void on_rmtpserver_receivedcmd(QString cmd);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
