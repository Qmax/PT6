/****************************************************************************
** Meta object code from reading C++ file 'IICMWidget.h'
**
** Created: Wed Jul 9 11:22:12 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../IICMWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IICMWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IICMWidget[] = {

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

static const char qt_meta_stringdata_IICMWidget[] = {
    "IICMWidget\0"
};

const QMetaObject IICMWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IICMWidget,
      qt_meta_data_IICMWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IICMWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IICMWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IICMWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IICMWidget))
        return static_cast<void*>(const_cast< IICMWidget*>(this));
    if (!strcmp(_clname, "IICMTestJigInterface"))
        return static_cast< IICMTestJigInterface*>(const_cast< IICMWidget*>(this));
    if (!strcmp(_clname, "pt.ICMTestJigInterface/1.0.0.1"))
        return static_cast< IICMTestJigInterface*>(const_cast< IICMWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int IICMWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
