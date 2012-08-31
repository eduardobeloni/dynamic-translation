#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTranslator>
#include <QWidget>

namespace Ui
{
    class MainWindow;
}

class QEvent;

class MainWindow: public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private:
    Ui::MainWindow *ui;
    QTranslator _translatorPtbr;

    void retranslate();
    virtual void changeEvent(QEvent *);

private slots:
    void langChanged(int);
};

#endif
