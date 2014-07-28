/****************************************************************************
** Meta object code from reading C++ file 'daccalibration.h'
**
** Created: Mon Jul 28 13:18:10 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../daccalibration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'daccalibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DACCalibration[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x08,
      61,   15,   15,   15, 0x08,
      82,   15,   15,   15, 0x08,
     103,   15,   15,   15, 0x08,
     124,   16,   15,   15, 0x08,
     161,   15,   15,   15, 0x08,
     182,   15,   15,   15, 0x08,
     204,   15,   15,   15, 0x08,
     231,  224,   15,   15, 0x08,
     250,   15,   15,   15, 0x08,
     271,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DACCalibration[] = {
    "DACCalibration\0\0index\0"
    "on_comboBox_2_currentIndexChanged(int)\0"
    "on_nextBut_clicked()\0on_exitBut_clicked()\0"
    "on_saveBut_clicked()\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "callNoOfPointsEdit()\0callActualValueEdit()\0"
    "callRxedValueEdit()\0pValue\0"
    "receiveValue(uint)\0receiveValue(double)\0"
    "receiveValue(QString)\0"
};

const QMetaObject DACCalibration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DACCalibration,
      qt_meta_data_DACCalibration, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DACCalibration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DACCalibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DACCalibration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DACCalibration))
        return static_cast<void*>(const_cast< DACCalibration*>(this));
    return QWidget::qt_metacast(_clname);
}

int DACCalibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_comboBox_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: on_nextBut_clicked(); break;
        case 2: on_exitBut_clicked(); break;
        case 3: on_saveBut_clicked(); break;
        case 4: on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: callNoOfPointsEdit(); break;
        case 6: callActualValueEdit(); break;
        case 7: callRxedValueEdit(); break;
        case 8: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
