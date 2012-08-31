#include <QProxyStyle>
#include <QApplication>

#include "customtabbar.h"

class ProxyStyle: public QProxyStyle
{
    int pixelMetric(PixelMetric metric, const QStyleOption *option = 0, const QWidget *widget = 0) const
    {
        if (metric == QStyle::PM_TabBarTabVSpace)
            return 22;
        return QProxyStyle::pixelMetric(metric, option, widget);
    }
};

CustomTabBar::CustomTabBar(QWidget *parent):
    QTabBar(parent)
{
    setStyle(new ProxyStyle());
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
}
