# Минимальная требуемая версия Qt (настройте под вашу версию)
QT_MIN_VERSION = 5.15.0

# Подключаемые модули Qt
QT += core gui widgets multimedia  # widgets и multimedia добавляются к core/gui

# Настройки проекта
TARGET = RomanceClub
TEMPLATE = app
CONFIG += c++17

# Исходные файлы
SOURCES += \
    main.cpp \
    romanceclub.cpp

HEADERS += \
    romanceclub.h

# Ресурсы
RESOURCES += \
    romanceclub.qrc

# Настройки для Windows (опционально)
win32 {
    RC_ICONS = app_icon.ico
}

# Оптимизация для релиза
release {
    DEFINES += QT_NO_DEBUG_OUTPUT
    QMAKE_CXXFLAGS += -O2
}

debug {
    DEFINES += QT_DEBUG
    QMAKE_CXXFLAGS += -g
}
