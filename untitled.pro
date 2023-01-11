#-------------------------------------------------
#
# Project created by QtCreator 2022-05-20T18:54:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    guahaoshoufei.cpp \
    patient_sign_in.cpp \
    sign_up.cpp \
    reg_pat.cpp \
    function.cpp \
    reg_staff.cpp \
    reg_staff_med.cpp \
    doc_sign_in.cpp \
    docui.cpp \
    med_sign_in.cpp \
    medui.cpp \
    med_manage.cpp \
    med_manage/add.cpp \
    med_manage/de.cpp \
    med_manage/mod_p.cpp \
    med_manage/del.cpp \
    med_manage/med_manage_new.cpp \
    guahao.cpp \
    zhenduankaiyao.cpp \
    diagnose.cpp \
    kaiyao.cpp \
    fayao.cpp

HEADERS += \
        mainwindow.h \
    guahaoshoufei.h \
    patient_sign_in.h \
    class/Medicine.h \
    class/Myhead.h \
    class/Patient.h \
    class/Staff.h \
    sign_up.h \
    reg_pat.h \
    reg_staff.h \
    reg_staff_med.h \
    doc_sign_in.h \
    docui.h \
    med_sign_in.h \
    medui.h \
    med_manage.h \
    med_manage/add.h \
    med_manage/de.h \
    med_manage/mod_p.h \
    med_manage/del.h \
    med_manage/med_manage_new.h \
    guahao.h \
    zhenduankaiyao.h \
    diagnose.h \
    kaiyao.h \
    fayao.h



FORMS += \
        mainwindow.ui \
    guahaoshoufei.ui \
    patient_sign_in.ui \
    sign_up.ui \
    reg_pat.ui \
    reg_staff.ui \
    reg_staff_med.ui \
    doc_sign_in.ui \
    docui.ui \
    med_sign_in.ui \
    medui.ui \
    med_manage.ui \
    med_manage/add.ui \
    med_manage/de.ui \
    med_manage/mod_p.ui \
    med_manage/del.ui \
    med_manage/med_manage_new.ui \
    guahao.ui \
    zhenduankaiyao.ui \
    diagnose.ui \
    kaiyao.ui \
    fayao.ui
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
