#-------------------------------------------------
#
# Project created by QtCreator 2016-12-12T14:44:07
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Verk3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    computer.cpp \
    dataaccess.cpp \
    scientist.cpp \
    service.cpp \
    addscientistdialog.cpp

HEADERS  += mainwindow.h \
    computer.h \
    dataaccess.h \
    scientist.h \
    service.h \
    addscientistdialog.h

FORMS    += mainwindow.ui \
    addscientistdialog.ui

DISTFILES += \
    Verk3.pro.user
