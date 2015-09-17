#include "dialog_addmetal.h"
#include "ui_dialog_addmetal.h"

Dialog_AddMetal::Dialog_AddMetal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_AddMetal)
{
    ui->setupUi(this);
}

Dialog_AddMetal::~Dialog_AddMetal()
{
    delete ui;
}
