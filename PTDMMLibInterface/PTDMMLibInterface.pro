# -------------------------------------------------
# Project created by QtCreator 2013-02-04T17:24:45
# -------------------------------------------------
QT += core
TARGET = PTDMMLibInterface
TEMPLATE = lib
CONFIG += plugin
SOURCES += ad7190component.cpp \
    ad5318components.cpp \
    ptdmmlibinterface.cpp
HEADERS += serialdevice.h \
    ad7190component.h \
    InterfaceFunctionalComponents.h \
    ad5318components.h \
    appcardcomponents.h \
    AppdeviceRegisterDetails.h \
    appcardfunctiontemplate.h \
    CalibrationInterfaces.h \
    BackPlaneInterface.h \
    macro.h \
    DMMLibInterface.h \
    ptdmmlibinterface.h \
    ApplicationCardInterface.h \
    IPSOCCommunication.h
DESTDIR = /exports/nfsroot-ccwmx51js/home/
