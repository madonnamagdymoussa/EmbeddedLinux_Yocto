/****************************************************************************
** Meta object code from reading C++ file 'DeviceController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Qt_Client_App/DeviceController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceController_t {
    QByteArrayData data[12];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceController_t qt_meta_stringdata_DeviceController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DeviceController"
QT_MOC_LITERAL(1, 17, 9), // "connected"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "disconnected"
QT_MOC_LITERAL(4, 41, 12), // "stateChanged"
QT_MOC_LITERAL(5, 54, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(6, 83, 12), // "errorOccured"
QT_MOC_LITERAL(7, 96, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(8, 125, 9), // "dataReady"
QT_MOC_LITERAL(9, 135, 19), // "socket_stateChanged"
QT_MOC_LITERAL(10, 155, 5), // "state"
QT_MOC_LITERAL(11, 161, 16) // "socket_readyRead"

    },
    "DeviceController\0connected\0\0disconnected\0"
    "stateChanged\0QAbstractSocket::SocketState\0"
    "errorOccured\0QAbstractSocket::SocketError\0"
    "dataReady\0socket_stateChanged\0state\0"
    "socket_readyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,
       8,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   60,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void,

       0        // eod
};

void DeviceController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 3: _t->errorOccured((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->dataReady((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->socket_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 6: _t->socket_readyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 5:
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
            using _t = void (DeviceController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(QAbstractSocket::SocketState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::errorOccured)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeviceController::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceController::dataReady)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DeviceController.data,
    qt_meta_data_DeviceController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DeviceController::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeviceController::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeviceController::stateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceController::errorOccured(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeviceController::dataReady(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
