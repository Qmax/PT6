/****************************************************************************
** Meta object code from reading C++ file 'testkeithley2100lib.h'
**
** Created: Fri Jun 20 13:33:01 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../testkeithley2100lib.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testkeithley2100lib.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_testKeithley2100Lib[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   21,   20,   20, 0x08,
      66,   21,   20,   20, 0x08,
     103,   20,   20,   20, 0x08,
     129,   20,   20,   20, 0x08,
     153,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_testKeithley2100Lib[] = {
    "testKeithley2100Lib\0\0index\0"
    "on_comboBox_2_currentIndexChanged(int)\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0ADCRead()\0"
};

const QMetaObject testKeithley2100Lib::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_testKeithley2100Lib,
      qt_meta_data_testKeithley2100Lib, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &testKeithley2100Lib::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *testKeithley2100Lib::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *testKeithley2100Lib::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_testKeithley2100Lib))
        return static_cast<void*>(const_cast< testKeithley2100Lib*>(this));
    return QWidget::qt_metacast(_clname);
}

int testKeithley2100Lib::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_comboBox_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_pushButton_2_clicked(); break;
        case 3: on_pushButton_clicked(); break;
        case 4: ADCRead(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
