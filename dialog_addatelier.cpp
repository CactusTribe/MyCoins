#include "dialog_addatelier.h"
#include "ui_dialog_addatelier.h"

Dialog_AddAtelier::Dialog_AddAtelier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_AddAtelier)
{
    ui->setupUi(this);
}

Dialog_AddAtelier::~Dialog_AddAtelier()
{
    delete ui;
}
