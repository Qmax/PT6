/****************************************************************************
** Meta object code from reading C++ file 'ptappcarddrvrecev.h'
**
** Created: Wed Jul 9 11:20:18 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ptappcarddrvrecev.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptappcarddrvrecev.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PtAppCardDrvRecev[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      44,   18,   18,   18, 0x08,
      74,   68,   18,   18, 0x08,
     114,   18,   18,   18, 0x08,
     143,   18,   18,   18, 0x08,
     172,   18,   18,   18, 0x08,
     199,   18,   18,   18, 0x08,
     224,   18,   18,   18, 0x08,
     248,   68,   18,   18, 0x08,
     290,   18,   18,   18, 0x08,
     319,   18,   18,   18, 0x08,
     348,   18,   18,   18, 0x08,
     375,   18,   18,   18, 0x08,
     401,   18,   18,   18, 0x08,
     428,   18,   18,   18, 0x08,
     454,   68,   18,   18, 0x08,
     496,   18,   18,   18, 0x08,
     522,   18,   18,   18, 0x08,
     551,   18,   18,   18, 0x08,
     580,   18,   18,   18, 0x08,
     607,   18,   18,   18, 0x08,
     633,   18,   18,   18, 0x08,
     659,   68,   18,   18, 0x08,
     708,   18,   18,   18, 0x08,
     737,   68,   18,   18, 0x08,
     780,   68,   18,   18, 0x08,
     827,   18,   18,   18, 0x08,
     848,   68,   18,   18, 0x08,
     883,   18,   18,   18, 0x08,
     903,   18,   18,   18, 0x08,
     932,   18,   18,   18, 0x08,
     959,   18,   18,   18, 0x08,
     977,   18,   18,   18, 0x08,
     999,  992,   18,   18, 0x08,
    1018,   18,   18,   18, 0x08,
    1039,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PtAppCardDrvRecev[] = {
    "PtAppCardDrvRecev\0\0on_butAppWrite_clicked()\0"
    "on_butAppRead_clicked()\0index\0"
    "on_cmbICMRange_currentIndexChanged(int)\0"
    "on_chkRece2RMSCAVG_clicked()\0"
    "on_chkRece1RMSCAVG_clicked()\0"
    "on_chkICMBCAPSEL_clicked()\0"
    "on_chkICMIASEL_clicked()\0"
    "on_chkICMGAIN_clicked()\0"
    "on_cmbR2Coupling_currentIndexChanged(int)\0"
    "on_chkRece2HAIPSEL_clicked()\0"
    "on_chkRece2RMSGAIN_clicked()\0"
    "on_chkRece2RMSIN_clicked()\0"
    "on_chkRece2HAAC_clicked()\0"
    "on_chkRece2ICMEN_clicked()\0"
    "on_chkRece2HSHA_clicked()\0"
    "on_cmbR1Coupling_currentIndexChanged(int)\0"
    "on_chkRece1HSVI_clicked()\0"
    "on_chkRece1HAIPSEL_clicked()\0"
    "on_chkRece1RMSGAIN_clicked()\0"
    "on_chkRece1RMSIN_clicked()\0"
    "on_chkRece1HAAC_clicked()\0"
    "on_chkRece1HSHA_clicked()\0"
    "on_cmbBPSourceImpedance_currentIndexChanged(int)\0"
    "on_chkSlotOffsetEN_clicked()\0"
    "on_cmbVISelection_currentIndexChanged(int)\0"
    "on_cmbSourceSelection_currentIndexChanged(int)\0"
    "on_chkSRCN_clicked()\0"
    "on_cmbIRS_currentIndexChanged(int)\0"
    "on_chkVIS_clicked()\0on_butReceiveRelay_clicked()\0"
    "on_butDriveRelay_clicked()\0callAddressEdit()\0"
    "callDataEdit()\0pValue\0receiveValue(uint)\0"
    "receiveValue(double)\0receiveValue(QString)\0"
};

const QMetaObject PtAppCardDrvRecev::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PtAppCardDrvRecev,
      qt_meta_data_PtAppCardDrvRecev, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PtAppCardDrvRecev::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PtAppCardDrvRecev::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PtAppCardDrvRecev::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PtAppCardDrvRecev))
        return static_cast<void*>(const_cast< PtAppCardDrvRecev*>(this));
    return QWidget::qt_metacast(_clname);
}

int PtAppCardDrvRecev::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_butAppWrite_clicked(); break;
        case 1: on_butAppRead_clicked(); break;
        case 2: on_cmbICMRange_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_chkRece2RMSCAVG_clicked(); break;
        case 4: on_chkRece1RMSCAVG_clicked(); break;
        case 5: on_chkICMBCAPSEL_clicked(); break;
        case 6: on_chkICMIASEL_clicked(); break;
        case 7: on_chkICMGAIN_clicked(); break;
        case 8: on_cmbR2Coupling_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_chkRece2HAIPSEL_clicked(); break;
        case 10: on_chkRece2RMSGAIN_clicked(); break;
        case 11: on_chkRece2RMSIN_clicked(); break;
        case 12: on_chkRece2HAAC_clicked(); break;
        case 13: on_chkRece2ICMEN_clicked(); break;
        case 14: on_chkRece2HSHA_clicked(); break;
        case 15: on_cmbR1Coupling_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: on_chkRece1HSVI_clicked(); break;
        case 17: on_chkRece1HAIPSEL_clicked(); break;
        case 18: on_chkRece1RMSGAIN_clicked(); break;
        case 19: on_chkRece1RMSIN_clicked(); break;
        case 20: on_chkRece1HAAC_clicked(); break;
        case 21: on_chkRece1HSHA_clicked(); break;
        case 22: on_cmbBPSourceImpedance_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: on_chkSlotOffsetEN_clicked(); break;
        case 24: on_cmbVISelection_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: on_cmbSourceSelection_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: on_chkSRCN_clicked(); break;
        case 27: on_cmbIRS_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: on_chkVIS_clicked(); break;
        case 29: on_butReceiveRelay_clicked(); break;
        case 30: on_butDriveRelay_clicked(); break;
        case 31: callAddressEdit(); break;
        case 32: callDataEdit(); break;
        case 33: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 34: receiveValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 35: receiveValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 36;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
