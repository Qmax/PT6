/****************************************************************************
** Meta object code from reading C++ file 'qswitch.h'
**
** Created: Fri Oct 18 12:17:10 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qswitch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qswitch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSwitch[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,    8,    8,    8, 0x0a,
      43,    8,    8,    8, 0x0a,
      63,    8,    8,    8, 0x0a,

 // properties: name, type, flags
      82,   77, 0x01095103,
      99,   88, 0x0009510b,

 // enums: name, flags, count, data
      88, 0x0,    2,   44,

 // enum data: key, value
     104, uint(QSwitch::Horizontal),
     115, uint(QSwitch::Vertical),

       0        // eod
};

static const char qt_meta_stringdata_QSwitch[] = {
    "QSwitch\0\0valueChanged(bool)\0setValue(bool)\0"
    "setType(SwitchType)\0toggleValue()\0"
    "bool\0value\0SwitchType\0type\0Horizontal\0"
    "Vertical\0"
};

const QMetaObject QSwitch::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QSwitch,
      qt_meta_data_QSwitch, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSwitch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSwitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSwitch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSwitch))
        return static_cast<void*>(const_cast< QSwitch*>(this));
    return QWidget::qt_metacast(_clname);
}

int QSwitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setType((*reinterpret_cast< SwitchType(*)>(_a[1]))); break;
        case 3: toggleValue(); break;
        default: ;
        }
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = value(); break;
        case 1: *reinterpret_cast< SwitchType*>(_v) = type(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< bool*>(_v)); break;
        case 1: setType(*reinterpret_cast< SwitchType*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSwitch::valueChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
