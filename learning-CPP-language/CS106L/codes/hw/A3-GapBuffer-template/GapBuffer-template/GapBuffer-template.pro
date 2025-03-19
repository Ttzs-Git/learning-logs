QT += testlib
QT += gui
CONFIG += qt warn_on depend_includepath testcase
CONFIG += c++1z

TEMPLATE = app

SOURCES +=  tst_testcases.cpp

HEADERS += \
    GapBuffer.h

QMAKE_CXXFLAGS += -std=c++1z \
    -Wall \
    -Wextra \
