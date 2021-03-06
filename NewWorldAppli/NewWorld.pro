#-------------------------------------------------
#
# Project created by QtCreator 2016-12-16T13:50:30
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NewWorld
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogConnexion.cpp \
    dialogMenuPrincipal.cpp \
    mainwindow2.cpp \
    dialogmodifierpersonnel.cpp \
    dialogajoutpersonnel.cpp \
    dialogajoutrayons.cpp \
    dialogmodifiertypeproduits.cpp \
    dialogafficheimageproduit.cpp

HEADERS  += mainwindow.h \
    dialogConnexion.h \
    dialogMenuPrincipal.h \
    mainwindow2.h \
    dialogmodifierpersonnel.h \
    dialogajoutpersonnel.h \
    dialogajoutrayons.h \
    dialogmodifiertypeproduits.h \
    dialogafficheimageproduit.h

FORMS    += mainwindow.ui \
    dialogConnexion.ui \
    dialogMenuPrincipal.ui \
    mainwindow2.ui \
    dialogmodifierpersonnel.ui \
    dialogajoutpersonnel.ui \
    dialogajoutrayons.ui \
    dialogmodifiertypeproduits.ui \
    dialogafficheimageproduit.ui

TRANSLATIONS += newWorld_fr_FR.ts

RESOURCES += \
    ressources.qrc
