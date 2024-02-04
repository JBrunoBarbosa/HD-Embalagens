QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# Seção para a aplicação principal
contains(CONFIG, debug) {
    DEFINES += MAIN_APP
}


# Seção para os testes
contains(CONFIG, test) {
    DEFINES += MAIN_TEST
}

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/sources/databasemanager.cpp \
    src/sources/main.cpp \
    src/sources/mainwindow.cpp \
    src/sources/productimpl.cpp \
    src/sources/productwidget.cpp \
    src/sources/saleimpl.cpp \
    src/sources/saleswidget.cpp \
    src/sources/userimpl.cpp \
    src/sources/userwidget.cpp \
    tests/Unitario/unitmain.cpp \
    tests/Unitario/unitproduct.cpp \
    tests/Unitario/unitsale.cpp \
    tests/Unitario/unituser.cpp

HEADERS += \
    src/headers/databasemanager.h \
    src/headers/mainwindow.h \
    src/headers/sale.h \
    src/headers/saleimpl.h \
    src/headers/saleswidget.h \
    src/headers/product.h \
    src/headers/productimpl.h \
    src/headers/productwidget.h \
    src/headers/user.h \
    src/headers/userimpl.h \
    src/headers/userwidget.h \
    tests/Unitario/unitproduct.h \
    tests/Unitario/unitsale.h \
    tests/Unitario/unituser.h

FORMS += \
    src/ui/mainwindow.ui \
    src/ui/productwidgetwindow.ui \
    src/ui/saleswidgetwindow.ui \
    src/ui/userwidgetwindow.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc\
