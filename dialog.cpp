#include "dialog.h"
#include <QIcon>
#include <QFileDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("各种对话框实例"));
    setWindowIcon(QIcon(":/new/prefix1/Qt.ico"));
    fileBtn = new QPushButton;
    fileBtn->setText(tr("文件标准对话框实例"));
    fileLineEdit = new QLineEdit;
    mainLayout = new QGridLayout(this);
    mainLayout->addWidget(fileBtn, 0, 0);
    mainLayout->addWidget(fileLineEdit, 0, 1);
    connect(fileBtn, SIGNAL(clicked()), this, SLOT(showFile()));
    colorBtn = new QPushButton;
    colorBtn->setText(tr("颜色标准对话框实例"));
    colorFrame = new QFrame;
    colorFrame->setFrameShape(QFrame::Box);
    colorFrame->setAutoFillBackground(true);
    mainLayout->addWidget(colorBtn, 1, 0);
    mainLayout->addWidget(colorFrame, 1, 1);
    connect(colorBtn, SIGNAL(clicked()), this, SLOT(showColor()));
}

Dialog::~Dialog()
{

}

void Dialog::showFile()
{
    QString s = QFileDialog::getOpenFileName(this, "open file dialog", "/", "C++ files(*.cpp);;C files(*.c);;Head files(*.h)");
    fileLineEdit->setText(s);
}
void Dialog::showColor()
{
    QColor c = QColorDialog::getColor(Qt::blue);
    if(c.isValid())
    {
        colorFrame->setPalette(QPalette(c));
    }
}
