/****************************************************************************
** Meta object code from reading C++ file 'visettings.h'
**
** Created: Fri Jul 25 12:44:38 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../visettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VISettings[] = {

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
      12,   11,   11,   11, 0x08,
      28,   11,   11,   11, 0x08,
      47,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VISettings[] = {
    "VISettings\0\0callTicksEdit()\0"
    "receiveValue(uint)\0on_butOK_clicked()\0"
    "saveSettingsXML()\0"
};

const QMetaObject VISettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VISettings,
      qt_meta_data_VISettings, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VISettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VISettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VISettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VISettings))
        return static_cast<void*>(const_cast< VISettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int VISettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: callTicksEdit(); break;
        case 1: receiveValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: on_butOK_clicked(); break;
        case 3: saveSettingsXML(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
