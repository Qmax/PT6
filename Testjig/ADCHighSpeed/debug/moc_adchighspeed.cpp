/****************************************************************************
** Meta object code from reading C++ file 'adchighspeed.h'
**
** Created: Sat Apr 19 14:46:29 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adchighspeed.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adchighspeed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ADCHighSpeed[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      68,   13,   13,   13, 0x08,
      93,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ADCHighSpeed[] = {
    "ADCHighSpeed\0\0on_readVersion_3_clicked()\0"
    "on_readVersion_2_clicked()\0"
    "on_readVersion_clicked()\0"
    "on_readCodeID_clicked()\0"
};

const QMetaObject ADCHighSpeed::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ADCHighSpeed,
      qt_meta_data_ADCHighSpeed, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ADCHighSpeed::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ADCHighSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ADCHighSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ADCHighSpeed))
        return static_cast<void*>(const_cast< ADCHighSpeed*>(this));
    return QWidget::qt_metacast(_clname);
}

int ADCHighSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_readVersion_3_clicked(); break;
        case 1: on_readVersion_2_clicked(); break;
        case 2: on_readVersion_clicked(); break;
        case 3: on_readCodeID_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
