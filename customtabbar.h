#ifndef CUSTOMTABBAR_H
#define CUSTOMTABBAR_H

#include <QTabBar>
#include <QSize>

class CustomTabBar: public QTabBar
{
    Q_OBJECT

public:
    CustomTabBar(QWidget *parent = 0);
};

#endif
