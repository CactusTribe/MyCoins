#include "dialog_addperiode.h"
#include "ui_dialog_addperiode.h"

Dialog_AddPeriode::Dialog_AddPeriode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_AddPeriode)
{
    ui->setupUi(this);
}

Dialog_AddPeriode::~Dialog_AddPeriode()
{
    delete ui;
}
