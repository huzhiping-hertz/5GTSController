/****************************************************************************
** Meta object code from reading C++ file 'rmtpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../5GTSController/rmtpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rmtpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RmtpServer_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RmtpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RmtpServer_t qt_meta_stringdata_RmtpServer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RmtpServer"
QT_MOC_LITERAL(1, 11, 19), // "signal_received_cmd"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "cmd"
QT_MOC_LITERAL(4, 36, 12), // "signal_FIXDF"
QT_MOC_LITERAL(5, 49, 29), // "shared_ptr<RmtpCmdFixDFParam>"
QT_MOC_LITERAL(6, 79, 3), // "ptr"
QT_MOC_LITERAL(7, 83, 22), // "on_newclient_connected"
QT_MOC_LITERAL(8, 106, 13), // "on_ready_read"
QT_MOC_LITERAL(9, 120, 16), // "on_state_changed"
QT_MOC_LITERAL(10, 137, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(11, 166, 11) // "socketState"

    },
    "RmtpServer\0signal_received_cmd\0\0cmd\0"
    "signal_FIXDF\0shared_ptr<RmtpCmdFixDFParam>\0"
    "ptr\0on_newclient_connected\0on_ready_read\0"
    "on_state_changed\0QAbstractSocket::SocketState\0"
    "socketState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RmtpServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x0a /* Public */,
       8,    0,   46,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void RmtpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RmtpServer *_t = static_cast<RmtpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_received_cmd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signal_FIXDF((*reinterpret_cast< shared_ptr<RmtpCmdFixDFParam>(*)>(_a[1]))); break;
        case 2: _t->on_newclient_connected(); break;
        case 3: _t->on_ready_read(); break;
        case 4: _t->on_state_changed((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RmtpServer::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RmtpServer::signal_received_cmd)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RmtpServer::*_t)(shared_ptr<RmtpCmdFixDFParam> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RmtpServer::signal_FIXDF)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RmtpServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RmtpServer.data,
      qt_meta_data_RmtpServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RmtpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RmtpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RmtpServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RmtpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void RmtpServer::signal_received_cmd(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RmtpServer::signal_FIXDF(shared_ptr<RmtpCmdFixDFParam> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
