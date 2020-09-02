/****************************************************************************
** Meta object code from reading C++ file 'gtsclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../5GTSController/gtsclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gtsclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GtsClient_t {
    QByteArrayData data[10];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GtsClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GtsClient_t qt_meta_stringdata_GtsClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GtsClient"
QT_MOC_LITERAL(1, 10, 26), // "signal_device_disconnected"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 23), // "signal_device_connected"
QT_MOC_LITERAL(4, 62, 22), // "signal_device_response"
QT_MOC_LITERAL(5, 85, 8), // "response"
QT_MOC_LITERAL(6, 94, 15), // "on_state_change"
QT_MOC_LITERAL(7, 110, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(8, 139, 5), // "state"
QT_MOC_LITERAL(9, 145, 13) // "on_ready_read"

    },
    "GtsClient\0signal_device_disconnected\0"
    "\0signal_device_connected\0"
    "signal_device_response\0response\0"
    "on_state_change\0QAbstractSocket::SocketState\0"
    "state\0on_ready_read"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GtsClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       9,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void GtsClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GtsClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_device_disconnected(); break;
        case 1: _t->signal_device_connected(); break;
        case 2: _t->signal_device_response((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_state_change((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->on_ready_read(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            using _t = void (GtsClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GtsClient::signal_device_disconnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GtsClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GtsClient::signal_device_connected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GtsClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GtsClient::signal_device_response)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GtsClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GtsClient.data,
    qt_meta_data_GtsClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GtsClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GtsClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GtsClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GtsClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GtsClient::signal_device_disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GtsClient::signal_device_connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GtsClient::signal_device_response(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
