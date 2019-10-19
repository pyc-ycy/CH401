#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QColorDialog>
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

 private:
    QPushButton *fileBtn;
    QLineEdit *fileLineEdit;
    QGridLayout *mainLayout;
    QPushButton *colorBtn;
    QFrame * colorFrame;

 private slots:
    void showFile();
    void showColor();
};

#endif // DIALOG_H
