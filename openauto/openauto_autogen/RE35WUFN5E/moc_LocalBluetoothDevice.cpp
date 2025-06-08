/****************************************************************************
** Meta object code from reading C++ file 'LocalBluetoothDevice.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.17)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../include/openauto/Projection/LocalBluetoothDevice.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalBluetoothDevice.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.17. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_openauto__projection__LocalBluetoothDevice_t {
    QByteArrayData data[21];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_openauto__projection__LocalBluetoothDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_openauto__projection__LocalBluetoothDevice_t qt_meta_stringdata_openauto__projection__LocalBluetoothDevice = {
    {
QT_MOC_LITERAL(0, 0, 42), // "openauto::projection::LocalBl..."
QT_MOC_LITERAL(1, 43, 12), // "startPairing"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 7), // "address"
QT_MOC_LITERAL(4, 65, 23), // "PairingPromise::Pointer"
QT_MOC_LITERAL(5, 89, 7), // "promise"
QT_MOC_LITERAL(6, 97, 26), // "createBluetoothLocalDevice"
QT_MOC_LITERAL(7, 124, 14), // "onStartPairing"
QT_MOC_LITERAL(8, 139, 28), // "onPairingDisplayConfirmation"
QT_MOC_LITERAL(9, 168, 17), // "QBluetoothAddress"
QT_MOC_LITERAL(10, 186, 3), // "pin"
QT_MOC_LITERAL(11, 190, 23), // "onPairingDisplayPinCode"
QT_MOC_LITERAL(12, 214, 17), // "onPairingFinished"
QT_MOC_LITERAL(13, 232, 30), // "QBluetoothLocalDevice::Pairing"
QT_MOC_LITERAL(14, 263, 7), // "pairing"
QT_MOC_LITERAL(15, 271, 7), // "onError"
QT_MOC_LITERAL(16, 279, 28), // "QBluetoothLocalDevice::Error"
QT_MOC_LITERAL(17, 308, 5), // "error"
QT_MOC_LITERAL(18, 314, 22), // "onHostModeStateChanged"
QT_MOC_LITERAL(19, 337, 31), // "QBluetoothLocalDevice::HostMode"
QT_MOC_LITERAL(20, 369, 5) // "state"

    },
    "openauto::projection::LocalBluetoothDevice\0"
    "startPairing\0\0address\0PairingPromise::Pointer\0"
    "promise\0createBluetoothLocalDevice\0"
    "onStartPairing\0onPairingDisplayConfirmation\0"
    "QBluetoothAddress\0pin\0onPairingDisplayPinCode\0"
    "onPairingFinished\0QBluetoothLocalDevice::Pairing\0"
    "pairing\0onError\0QBluetoothLocalDevice::Error\0"
    "error\0onHostModeStateChanged\0"
    "QBluetoothLocalDevice::HostMode\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_openauto__projection__LocalBluetoothDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   59,    2, 0x08 /* Private */,
       7,    2,   60,    2, 0x08 /* Private */,
       8,    2,   65,    2, 0x08 /* Private */,
      11,    2,   70,    2, 0x08 /* Private */,
      12,    2,   75,    2, 0x08 /* Private */,
      15,    1,   80,    2, 0x08 /* Private */,
      18,    1,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,    3,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,    3,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 13,    3,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void openauto::projection::LocalBluetoothDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalBluetoothDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startPairing((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< PairingPromise::Pointer(*)>(_a[2]))); break;
        case 1: _t->createBluetoothLocalDevice(); break;
        case 2: _t->onStartPairing((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< PairingPromise::Pointer(*)>(_a[2]))); break;
        case 3: _t->onPairingDisplayConfirmation((*reinterpret_cast< const QBluetoothAddress(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->onPairingDisplayPinCode((*reinterpret_cast< const QBluetoothAddress(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->onPairingFinished((*reinterpret_cast< const QBluetoothAddress(*)>(_a[1])),(*reinterpret_cast< QBluetoothLocalDevice::Pairing(*)>(_a[2]))); break;
        case 6: _t->onError((*reinterpret_cast< QBluetoothLocalDevice::Error(*)>(_a[1]))); break;
        case 7: _t->onHostModeStateChanged((*reinterpret_cast< QBluetoothLocalDevice::HostMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothAddress >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothAddress >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothAddress >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothLocalDevice::Pairing >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothLocalDevice::Error >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothLocalDevice::HostMode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalBluetoothDevice::*)(const QString & , PairingPromise::Pointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalBluetoothDevice::startPairing)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject openauto::projection::LocalBluetoothDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_openauto__projection__LocalBluetoothDevice.data,
    qt_meta_data_openauto__projection__LocalBluetoothDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *openauto::projection::LocalBluetoothDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *openauto::projection::LocalBluetoothDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_openauto__projection__LocalBluetoothDevice.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IBluetoothDevice"))
        return static_cast< IBluetoothDevice*>(this);
    return QObject::qt_metacast(_clname);
}

int openauto::projection::LocalBluetoothDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void openauto::projection::LocalBluetoothDevice::startPairing(const QString & _t1, PairingPromise::Pointer _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
