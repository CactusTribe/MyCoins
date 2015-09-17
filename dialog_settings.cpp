#include "dialog_settings.h"
#include "ui_dialog_settings.h"

Dialog_Settings::Dialog_Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Settings)
{
    ui->setupUi(this);
}

Dialog_Settings::~Dialog_Settings()
{
    delete ui;
}
