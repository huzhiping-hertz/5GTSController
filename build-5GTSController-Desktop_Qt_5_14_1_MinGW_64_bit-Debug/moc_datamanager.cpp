/****************************************************************************
** Meta object code from reading C++ file 'datamanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../5GTSController/datamanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datamanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataManager_t {
    QByteArrayData data[7];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataManager_t qt_meta_stringdata_DataManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DataManager"
QT_MOC_LITERAL(1, 12, 20), // "signal_received_data"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "DFData"
QT_MOC_LITERAL(4, 41, 24), // "signal_data_disconnected"
QT_MOC_LITERAL(5, 66, 21), // "signal_data_connected"
QT_MOC_LITERAL(6, 88, 16) // "on_received_data"

    },
    "DataManager\0signal_received_data\0\0"
    "DFData\0signal_data_disconnected\0"
    "signal_data_connected\0on_received_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_received_data((*reinterpret_cast< DFData(*)>(_a[1]))); break;
        case 1: _t->signal_data_disconnected(); break;
        case 2: _t->signal_data_connected(); break;
        case 3: _t->on_received_data(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataManager::*)(DFData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::signal_received_data)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::signal_data_disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::signal_data_connected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataManager.data,
    qt_meta_data_DataManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataManager::signal_received_data(DFData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataManager::signal_data_disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataManager::signal_data_connected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
