QT += core
QT -= gui


CONFIG += c++11

TARGET = GenerateQMLFile
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    importelement.cpp \
    typeelement.cpp

HEADERS += \
    iserializecomponent.h \
    importelement.h \
    typeelement.h \
    common.h

target.target = /opt/
INSTALLS += target

