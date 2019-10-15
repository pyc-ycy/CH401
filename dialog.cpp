#include "dialog.h"
#include <QIcon>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("各种对话框实例"));
    setWindowIcon(QIcon(":/new/prefix1/Qt.ico"));
}

Dialog::~Dialog()
{

}
