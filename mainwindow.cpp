#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLocale>
#include <QEvent>

MainWindow::MainWindow(QWidget *parent):
    QWidget(parent)
{
    ui = new Ui::MainWindow;
    ui->setupUi(this);

    ui->tabWidget->addTab(new QWidget(this), QString());
    ui->tabWidget->addTab(new QWidget(this), QString());
    ui->tabWidget->addTab(new QWidget(this), QString());
    ui->tabWidget->addTab(new QWidget(this), QString());

    ui->comboBox->addItem(QString(), 0);
    ui->comboBox->addItem(QString(), 1);
    retranslate();

    qDebug("translation %d", _translatorPtbr.load("pt_BR.qm"));
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), SLOT(langChanged(int)));
    ui->comboBox->setCurrentIndex(1);
}

void MainWindow::langChanged(int index)
{
    qDebug("%s %d", __FUNCTION__, index);
    if (index)
        qApp->removeTranslator(&_translatorPtbr);
    else
        qApp->installTranslator(&_translatorPtbr);
}

void MainWindow::changeEvent(QEvent *e)
{
    if (e->type() == QEvent::LanguageChange)
        retranslate();
    QWidget::changeEvent(e);
}

void MainWindow::retranslate()
{
    qDebug("%s", __FUNCTION__);
    ui->tabWidget->setTabText(0, trUtf8("England"));
    ui->tabWidget->setTabText(1, trUtf8("Wales"));
    ui->tabWidget->setTabText(2, trUtf8("Scotland"));
    ui->tabWidget->setTabText(3, trUtf8("Northern Ireland"));

    ui->comboBox->setItemText(0, trUtf8("Portuguese"));
    ui->comboBox->setItemText(1, trUtf8("English"));

    ui->retranslateUi(this);
}
