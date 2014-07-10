# -------------------------------------------------
# Project created by QtCreator 2013-01-11T12:27:38
# -------------------------------------------------
QT += svg
TARGET = SLInterface
CONFIG += plugin
TEMPLATE = lib
DEFINES += SLCONTROL_LIBRARY
SOURCES += offset.cpp \
    ptslinterface.cpp \
    shortlocater.cpp \
    slcontrol.cpp
HEADERS += serialdevice.h \
    display.h \
    AppdeviceRegisterDetails.h \
    HACADCTestJigInterface.h \
    InterfacePTLibrary.h \
    PTAppBckPsocInterface.h \
    appcardfunctiontemplate.h \
    offset.h \
    appcardfunctiontemplate.h \
    InterfacePTLibrary.h \
    ApplicationCardInterface.h \
    PTAppBckPsocInterface.h \
    HACADCTestJigInterface.h \
    GPIOInterfaces.h \
    ptslinterface.h \
    interfaceHeader.h \
    PTEventInterfaces.h \
    PTGPIOEventInterfaces.h \
    DMMLibInterface.h \
    IPSOCCommunication.h \
    BackPlaneInterface.h \
    shortlocater.h \
    slcontrol.h \
    SLControl_global.h
FORMS = offset.ui \
    shortlocater.ui
DESTDIR = /exports/nfsroot-ccwmx51js/home/
RESOURCES += svgResource.qrc \
    svgbutton.qrc
