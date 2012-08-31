#include <QFocusEvent>

#include "customlineedit.h"

CustomLineEdit::CustomLineEdit(QWidget *parent):
    QLineEdit(parent)
{
}

void CustomLineEdit::focusInEvent(QFocusEvent *ev)
{
    emit focusIn();
    QLineEdit::focusInEvent(ev);
}
