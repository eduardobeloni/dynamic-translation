QT += \
    core \
    gui

TARGET = tabs
TEMPLATE = app

SOURCES += \
    main.cpp\
    mainwindow.cpp \
    customlineedit.cpp \
    customtabbar.cpp \
    customtabwidget.cpp

HEADERS += \
    mainwindow.h \
    customlineedit.h \
    customtabbar.h \
    customtabwidget.h

FORMS += forms/mainwindow.ui

TRANSLATIONS += \
    i18n/pt_BR.ts

translations.name = Translations ${QMAKE_FILE_BASE}
translations.CONFIG += no_link target_predeps
translations.commands = @$$[QT_INSTALL_BINS]/lrelease ${QMAKE_FILE_IN} -qm ${QMAKE_FILE_OUT} &> /dev/null
translations.input = TRANSLATIONS
translations.output = ${QMAKE_FILE_BASE}.qm
translations.clean = ${QMAKE_FILE_BASE}.qm
QMAKE_EXTRA_COMPILERS += translations
