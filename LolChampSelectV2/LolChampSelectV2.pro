TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

DEFINES += ZMQ_STATIC
LIBS += -L$$PWD/../lib -lzmq -lws2_32 -lIphlpapi
INCLUDEPATH += $$PWD/../include

SOURCES += \
        caitlyn.cpp \
        champion.cpp \
        darius.cpp \
        draven.cpp \
        irelia.cpp \
        jhin.cpp \
        leblanc.cpp \
        main.cpp \
        mordekaiser.cpp \
        yasou.cpp \
        zed.cpp \
    role.cpp \
    name.cpp \
    stats.cpp

HEADERS += \
    caitlyn.h \
    champion.h \
    darius.h \
    draven.h \
    irelia.h \
    jhin.h \
    leblanc.h \
    mordekaiser.h \
    yasou.h \
    zed.h \
    role.h \
    name.h \
    stats.h
