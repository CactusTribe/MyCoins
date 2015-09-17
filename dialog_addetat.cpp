#include "dialog_addetat.h"
#include "ui_dialog_addetat.h"

Dialog_AddEtat::Dialog_AddEtat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_AddEtat)
{
    ui->setupUi(this);
}

Dialog_AddEtat::~Dialog_AddEtat()
{
    delete ui;
}
