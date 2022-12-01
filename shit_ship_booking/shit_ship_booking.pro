QT       += core gui sql
    quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    booking_kursi.cpp \
    booking_user.cpp \
    daftar.cpp \
    daftar_petugas.cpp \
    daftar_user.cpp \
    edit_data_kapal.cpp \
    input_petugas.cpp \
    jadwal_kapal.cpp \
    main.cpp \
    mainwindow.cpp \
    menu_petugas.cpp \
    mydb.cpp

HEADERS += \
    booking_kursi.h \
    booking_user.h \
    daftar.h \
    daftar_petugas.h \
    daftar_user.h \
    edit_data_kapal.h \
    input_petugas.h \
    jadwal_kapal.h \
    mainwindow.h \
    menu_petugas.h \
    mydb.h

FORMS += \
    booking_kursi.ui \
    booking_user.ui \
    daftar.ui \
    daftar_petugas.ui \
    daftar_user.ui \
    edit_data_kapal.ui \
    input_petugas.ui \
    jadwal_kapal.ui \
    mainwindow.ui \
    menu_petugas.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
