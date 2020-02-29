#include "mainwindow.h"
#include "datamanager.h"
#include "rmtpserver.h"
#include "gtsclient.h"

#include <QApplication>
#include <QTcpSocket>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
