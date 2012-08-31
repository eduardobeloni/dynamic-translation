#ifndef CUSTOMLINEEDIT_H
#define CUSTOMLINEEDIT_H

#include <QLineEdit>

class QFocusEvent;

class CustomLineEdit: public QLineEdit
{
    Q_OBJECT

public:
    CustomLineEdit(QWidget *parent = 0);

private:
    virtual void focusInEvent(QFocusEvent *);

signals:
    void focusIn();
};

#endif
