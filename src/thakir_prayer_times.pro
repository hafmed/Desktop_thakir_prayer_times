#-------------------------------------------------
# HAF 19-7-2020
# on Qt 5.9.5 GCC 7.3.0; 64 bit Qt Creator 4.5.2 Ubuntu 18.4
# sudo apt install g++
# sudo apt install cmake
# sudo apt-get install libgl-dev
# sudo apt-get install qt5-default
#------------Make *.AppImage----------------------
# in the directorie : compilation
# chmod a+x linuxdeployqt-6-x86_64.AppImage
# ./linuxdeployqt-6-x86_64.AppImage thakir_prayer_times -appimage -qmake=/home/hafmed/Qt5.12.8/5.12.8/gcc_64/bin/qmake
#-------------------------------------------------

QT     += core gui multimedia widgets

CONFIG += c++11
VERSION = 1.9.0 #1-9-2020
DEFINES += APP_VERSION=\\\"$$VERSION\\\"

QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = thakir_prayer_times
TEMPLATE = app

SOURCES +=  main.cpp \
        thakir_prayer_times.cpp \
    astro.c \
    prayer.c \
    about.cpp

HEADERS += thakir_prayer_times.h \
    astro.h \
    prayer.h \
    about.h \
    constants.h

FORMS += thakir_prayer_times.ui\
    about.ui

RESOURCES += \
    qtresource.qrc

win32:RC_ICONS += icons\thakir_prayer_times.ico
