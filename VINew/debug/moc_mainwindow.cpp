/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Sep 2 19:02:41 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      33,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     152,   11,   11,   11, 0x08,
     178,   11,   11,   11, 0x08,
     202,   11,   11,   11, 0x08,
     225,   11,   11,   11, 0x08,
     247,   11,   11,   11, 0x08,
     266,   11,   11,   11, 0x08,
     289,   11,   11,   11, 0x08,
     312,   11,   11,   11, 0x08,
     328,   11,   11,   11, 0x08,
     345,   11,   11,   11, 0x08,
     363,   11,   11,   11, 0x08,
     381,   11,   11,   11, 0x08,
     399,   11,   11,   11, 0x08,
     420,   11,   11,   11, 0x08,
     439,   11,   11,   11, 0x08,
     457,   11,   11,   11, 0x08,
     482,   11,   11,   11, 0x08,
     508,   11,   11,   11, 0x08,
     533,   11,   11,   11, 0x08,
     555,   11,   11,   11, 0x08,
     576,   11,   11,   11, 0x08,
     601,   11,   11,   11, 0x08,
     625,   11,   11,   11, 0x08,
     644,   11,   11,   11, 0x08,
     663,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_butZoom_clicked()\0"
    "on_yAxisBox_valueChanged(double)\0"
    "on_xAxisBox_valueChanged(double)\0"
    "on_butExternal_2_clicked()\0"
    "on_tblFrequency_clicked()\0"
    "on_tblImpedance_clicked()\0"
    "on_tblVoltage_clicked()\0on_butVerify_clicked()\0"
    "on_butLearn_clicked()\0on_butAM_clicked()\0"
    "on_butProbe2_clicked()\0on_butProbe1_clicked()\0"
    "shrinkSize(int)\0restoreSize(int)\0"
    "on_butR_clicked()\0on_butM_clicked()\0"
    "on_butL_clicked()\0on_butDown_clicked()\0"
    "on_butUP_clicked()\0on_exit_clicked()\0"
    "on_calibButton_clicked()\0"
    "on_deleteButton_clicked()\0"
    "on_storeButton_clicked()\0on_butProbe_clicked()\0"
    "on_butClip_clicked()\0on_startButton_clicked()\0"
    "on_butProClip_clicked()\0on_tblVI_clicked()\0"
    "on_tblVT_clicked()\0on_butViewTrace_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "IVIObserver"))
        return static_cast< IVIObserver*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_butZoom_clicked(); break;
        case 1: on_yAxisBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: on_xAxisBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: on_butExternal_2_clicked(); break;
        case 4: on_tblFrequency_clicked(); break;
        case 5: on_tblImpedance_clicked(); break;
        case 6: on_tblVoltage_clicked(); break;
        case 7: on_butVerify_clicked(); break;
        case 8: on_butLearn_clicked(); break;
        case 9: on_butAM_clicked(); break;
        case 10: on_butProbe2_clicked(); break;
        case 11: on_butProbe1_clicked(); break;
        case 12: shrinkSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: restoreSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: on_butR_clicked(); break;
        case 15: on_butM_clicked(); break;
        case 16: on_butL_clicked(); break;
        case 17: on_butDown_clicked(); break;
        case 18: on_butUP_clicked(); break;
        case 19: on_exit_clicked(); break;
        case 20: on_calibButton_clicked(); break;
        case 21: on_deleteButton_clicked(); break;
        case 22: on_storeButton_clicked(); break;
        case 23: on_butProbe_clicked(); break;
        case 24: on_butClip_clicked(); break;
        case 25: on_startButton_clicked(); break;
        case 26: on_butProClip_clicked(); break;
        case 27: on_tblVI_clicked(); break;
        case 28: on_tblVT_clicked(); break;
        case 29: on_butViewTrace_clicked(); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
