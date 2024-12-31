QT       += core gui

QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
             admin.cpp\
             admindata.cpp \
             admininfo_manager.cpp \
             commodity.cpp\
             consumer.cpp\
             dingd.cpp\
             discount.cpp\
             good.cpp\
             info_restaurant.cpp\
             keymanager.cpp \
             main.cpp\
             MainMer.cpp\
             mainwindow.cpp\
             merchant_infornation.cpp\
             merchantinfo_manager.cpp \
             oneorder.cpp\
             panduan.cpp\
             pay.cpp\
             qt.cpp\
             regis.cpp\
             sales_log.cpp\
             search_restaurant.cpp\
             shangp.cpp\
             xiugai.cpp




HEADERS += \
             admin.h\
             admindata.h \
             admininfo_manager.h \
             commodity.h\
             consumer.h\
             cx_header.h \
             dingd.h\
             discount.h\
             good.h\
             info_restaurant.h\
             MainMer.h\
             keymanager.h \
             mainwindow.h\
             merchant_infornation.h\
             merchantinfo_manager.h \
             oneorder.h\
             pay.h\
             qt.h\
             regis.h\
             sales_log.h\
             search_restaurant.h\
             shangp.h\
             xiugai.h

FORMS += \
         admin.ui\
         commodity.ui\
         consumer.ui\
         dingd.ui\
         discount.ui\
         good.ui\
         info_restaurant.ui\
         MainMer.ui\
         mainwindow.ui\
         merchant_infornation.ui\
         oneorder.ui\
         pay.ui\
         qt.ui\
         regis.ui\
         sales_log.ui\
         search_restaurant.ui\
         shangp.ui\
         xiugai.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc\
