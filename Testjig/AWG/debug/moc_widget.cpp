/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Wed Jul 9 11:20:59 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x08,
      55,    8,    7,    7, 0x08,
      96,    8,    7,    7, 0x08,
     138,    7,    7,    7, 0x08,
     162,    7,    7,    7, 0x08,
     206,    7,    7,    7, 0x08,
     225,    7,    7,    7, 0x08,
     246,    7,    7,    7, 0x08,
     268,    7,    7,    7, 0x08,
     286,    7,    7,    7, 0x08,
     301,    7,    7,    7, 0x08,
     318,    7,    7,    7, 0x08,
     338,    7,    7,    7, 0x08,
     353,    7,    7,    7, 0x08,
     372,    7,    7,    7, 0x08,
     391,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0index\0on_cmbDriveMode_currentIndexChanged(int)\0"
    "on_cmbImpedance_currentIndexChanged(int)\0"
    "on_cmbDrvVoltage_currentIndexChanged(int)\0"
    "on_pushButton_clicked()\0"
    "on_cmbPatterns_currentIndexChanged(QString)\0"
    "receiveValue(uint)\0receiveValue(double)\0"
    "receiveValue(QString)\0callAddressEdit()\0"
    "callDataEdit()\0callOffsetEdit()\0"
    "callFrequencyEdit()\0callTimeEdit()\0"
    "callTimeBaseEdit()\0callDurationEdit()\0"
    "callSamplesEdit()\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_cmbDriveMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_cmbImpedance_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_cmbDrvVoltage_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_pushButton_clicked(); break;
        case 4: on_cmbPatterns_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 6: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: callAddressEdit(); break;
        case 9: callDataEdit(); break;
        case 10: callOffsetEdit(); break;
        case 11: callFrequencyEdit(); break;
        case 12: callTimeEdit(); break;
        case 13: callTimeBaseEdit(); break;
        case 14: callDurationEdit(); break;
        case 15: callSamplesEdit(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
