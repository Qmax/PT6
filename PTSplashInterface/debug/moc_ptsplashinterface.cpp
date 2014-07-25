/****************************************************************************
** Meta object code from reading C++ file 'ptsplashinterface.h'
**
** Created: Fri Jul 25 11:45:57 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ptsplashinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ptsplashinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SplashScreen[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SplashScreen[] = {
    "SplashScreen\0\0value\0setProgress(int)\0"
};

const QMetaObject SplashScreen::staticMetaObject = {
    { &QSplashScreen::staticMetaObject, qt_meta_stringdata_SplashScreen,
      qt_meta_data_SplashScreen, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SplashScreen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SplashScreen))
        return static_cast<void*>(const_cast< SplashScreen*>(this));
    return QSplashScreen::qt_metacast(_clname);
}

int SplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplashScreen::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_InterfaceClass[] = {

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

static const char qt_meta_stringdata_InterfaceClass[] = {
    "InterfaceClass\0"
};

const QMetaObject InterfaceClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InterfaceClass,
      qt_meta_data_InterfaceClass, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InterfaceClass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InterfaceClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InterfaceClass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceClass))
        return static_cast<void*>(const_cast< InterfaceClass*>(this));
    if (!strcmp(_clname, "PTSplashScreen"))
        return static_cast< PTSplashScreen*>(const_cast< InterfaceClass*>(this));
    if (!strcmp(_clname, "pt.ptsplashscreen/1.0.0.1"))
        return static_cast< PTSplashScreen*>(const_cast< InterfaceClass*>(this));
    return QObject::qt_metacast(_clname);
}

int InterfaceClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
