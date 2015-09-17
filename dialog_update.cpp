#include "dialog_update.h"
#include "ui_dialog_update.h"

Dialog_Update::Dialog_Update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Update)
{
    ui->setupUi(this);
}

Dialog_Update::~Dialog_Update()
{
    delete ui;
}
