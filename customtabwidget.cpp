#include "customtabwidget.h"
#include "customtabbar.h"

CustomTabWidget::CustomTabWidget(QWidget *parent):
    QTabWidget(parent)
{
    setTabBar(new CustomTabBar(this));
}
