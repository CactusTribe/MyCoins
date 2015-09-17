#include "dialog_addtype.h"
#include "ui_dialog_addtype.h"

Dialog_AddType::Dialog_AddType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_AddType)
{
    ui->setupUi(this);
}

Dialog_AddType::~Dialog_AddType()
{
    delete ui;
}
