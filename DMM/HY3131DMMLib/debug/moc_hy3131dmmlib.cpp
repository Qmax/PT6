/****************************************************************************
** Meta object code from reading C++ file 'hy3131dmmlib.h'
**
** Created: Mon Sep 1 10:57:39 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hy3131dmmlib.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hy3131dmmlib.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HY3131DMMLib[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_HY3131DMMLib[] = {
    "HY3131DMMLib\0"
};

const QMetaObject HY3131DMMLib::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HY3131DMMLib,
      qt_meta_data_HY3131DMMLib, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HY3131DMMLib::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HY3131DMMLib::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HY3131DMMLib::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HY3131DMMLib))
        return static_cast<void*>(const_cast< HY3131DMMLib*>(this));
    if (!strcmp(_clname, "IHY3131DMMLibInterface"))
        return static_cast< IHY3131DMMLibInterface*>(const_cast< HY3131DMMLib*>(this));
    if (!strcmp(_clname, "pt.HY3131DMMLibInterface/1.0.0.1"))
        return static_cast< IHY3131DMMLibInterface*>(const_cast< HY3131DMMLib*>(this));
    return QObject::qt_metacast(_clname);
}

int HY3131DMMLib::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
