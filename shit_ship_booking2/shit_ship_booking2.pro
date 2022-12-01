QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    booking_kapal.cpp \
    daftar_penumpang.cpp \
    daftar_petugas.cpp \
    edit_kapal.cpp \
    jadwal_kapal.cpp \
    login_penumpang.cpp \
    login_petugas.cpp \
    main.cpp \
    mainwindow.cpp \
    menu_petugas.cpp \
    pilih_kursi.cpp \
    tambah_kapal.cpp

HEADERS += \
    booking_kapal.h \
    daftar_penumpang.h \
    daftar_petugas.h \
    edit_kapal.h \
    jadwal_kapal.h \
    login_penumpang.h \
    login_petugas.h \
    mainwindow.h \
    menu_petugas.h \
    pilih_kursi.h \
    tambah_kapal.h

FORMS += \
    booking_kapal.ui \
    daftar_penumpang.ui \
    daftar_petugas.ui \
    edit_kapal.ui \
    jadwal_kapal.ui \
    login_penumpang.ui \
    login_petugas.ui \
    mainwindow.ui \
    menu_petugas.ui \
    pilih_kursi.ui \
    tambah_kapal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
