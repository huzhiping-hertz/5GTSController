/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../5GTSController/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_btnLinkDevice_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "on_device_connected"
QT_MOC_LITERAL(4, 57, 22), // "on_device_disconnected"
QT_MOC_LITERAL(5, 80, 18), // "on_device_response"
QT_MOC_LITERAL(6, 99, 8), // "response"
QT_MOC_LITERAL(7, 108, 23), // "on_device_response_data"
QT_MOC_LITERAL(8, 132, 6), // "DFData"
QT_MOC_LITERAL(9, 139, 21), // "on_btnSendCmd_clicked"
QT_MOC_LITERAL(10, 161, 24), // "on_btnRmtpListen_clicked"
QT_MOC_LITERAL(11, 186, 25), // "on_rmtpserver_receivedcmd"
QT_MOC_LITERAL(12, 212, 3), // "cmd"
QT_MOC_LITERAL(13, 216, 22), // "on_btnOptimize_clicked"
QT_MOC_LITERAL(14, 239, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(15, 258, 22), // "on_btnRmtpStop_clicked"
QT_MOC_LITERAL(16, 281, 19), // "on_rmtpserver_fixdf"
QT_MOC_LITERAL(17, 301, 29), // "shared_ptr<RmtpCmdFixDFParam>"
QT_MOC_LITERAL(18, 331, 3), // "ptr"
QT_MOC_LITERAL(19, 335, 18), // "on_rmtpserver_stop"
QT_MOC_LITERAL(20, 354, 26), // "on_btnUnlinkDevice_clicked"
QT_MOC_LITERAL(21, 381, 21), // "on_actionInfo_clicked"
QT_MOC_LITERAL(22, 403, 8), // "QAction*"
QT_MOC_LITERAL(23, 412, 6) // "action"

    },
    "MainWindow\0on_btnLinkDevice_clicked\0"
    "\0on_device_connected\0on_device_disconnected\0"
    "on_device_response\0response\0"
    "on_device_response_data\0DFData\0"
    "on_btnSendCmd_clicked\0on_btnRmtpListen_clicked\0"
    "on_rmtpserver_receivedcmd\0cmd\0"
    "on_btnOptimize_clicked\0on_btnStop_clicked\0"
    "on_btnRmtpStop_clicked\0on_rmtpserver_fixdf\0"
    "shared_ptr<RmtpCmdFixDFParam>\0ptr\0"
    "on_rmtpserver_stop\0on_btnUnlinkDevice_clicked\0"
    "on_actionInfo_clicked\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    1,   95,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    1,  100,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,
      20,    0,  110,    2, 0x08 /* Private */,
      21,    1,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnLinkDevice_clicked(); break;
        case 1: _t->on_device_connected(); break;
        case 2: _t->on_device_disconnected(); break;
        case 3: _t->on_device_response((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_device_response_data((*reinterpret_cast< DFData(*)>(_a[1]))); break;
        case 5: _t->on_btnSendCmd_clicked(); break;
        case 6: _t->on_btnRmtpListen_clicked(); break;
        case 7: _t->on_rmtpserver_receivedcmd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_btnOptimize_clicked(); break;
        case 9: _t->on_btnStop_clicked(); break;
        case 10: _t->on_btnRmtpStop_clicked(); break;
        case 11: _t->on_rmtpserver_fixdf((*reinterpret_cast< shared_ptr<RmtpCmdFixDFParam>(*)>(_a[1]))); break;
        case 12: _t->on_rmtpserver_stop(); break;
        case 13: _t->on_btnUnlinkDevice_clicked(); break;
        case 14: _t->on_actionInfo_clicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
