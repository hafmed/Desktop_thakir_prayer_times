/*
HAFIANE Mohamed
*/

#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include "ui_about.h"

class About : public QDialog
{
    Q_OBJECT

public:
    About(QWidget *parent = 0);

private:
    Ui::AboutClass ui;
};

#endif // ABOUT_H
