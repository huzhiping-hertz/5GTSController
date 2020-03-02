QT       += core gui sql
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 5GTSController
TEMPLATE = app
#----------------
   # any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    rmtpserver.cpp \
    rmtpcmd.cpp \
    gtscmd.cpp \
    gtsclient.cpp \
    datamanager.cpp \
    frameheader.cpp \
    framedfpan.cpp \
    dataparser.cpp \
    dfdata.cpp \
    gtscmdfactory.cpp \
    framefactory.cpp \
    optobj.cpp

HEADERS += \
        mainwindow.h \
    rmtpserver.h \
    rmtpcmd.h \
    gtscmd.h \
    gtsclient.h \
    datamanager.h \
    frameheader.h \
    framedfpan.h \
    dataparser.h \
    dfdata.h \
    gtscmdfactory.h \
    framefactory.h \
    frametagtype.h \
    optobj.h

FORMS += \
        mainwindow.ui
