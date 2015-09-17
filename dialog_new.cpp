#include "dialog_new.h"
#include "ui_dialog_new.h"

Dialog_New::Dialog_New(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_New)
{
    ui->setupUi(this);
}

Dialog_New::~Dialog_New()
{
    delete ui;
}
