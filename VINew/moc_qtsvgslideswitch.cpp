/****************************************************************************
** Meta object code from reading C++ file 'qtsvgslideswitch.h'
**
** Created: Wed Oct 30 10:37:20 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtsvgslideswitch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtsvgslideswitch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QtSvgSlideSwitch[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   18,   17,   17, 0x08,
      58,   50,   17,   17, 0x08,

 // properties: name, type, flags
      93,   85, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_QtSvgSlideSwitch[] = {
    "QtSvgSlideSwitch\0\0position\0"
    "setSwitchPosition(int)\0checked\0"
    "updateSwitchPosition(bool)\0QString\0"
    "skin\0"
};

const QMetaObject QtSvgSlideSwitch::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_QtSvgSlideSwitch,
      qt_meta_data_QtSvgSlideSwitch, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QtSvgSlideSwitch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QtSvgSlideSwitch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QtSvgSlideSwitch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtSvgSlideSwitch))
        return static_cast<void*>(const_cast< QtSvgSlideSwitch*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int QtSvgSlideSwitch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setSwitchPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: updateSwitchPosition((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = skin(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSkin(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
