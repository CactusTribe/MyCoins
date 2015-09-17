#include "dialog_addvaleur.h"
#include "ui_dialog_addvaleur.h"

Dialog_AddValeur::Dialog_AddValeur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_AddValeur)
{
    ui->setupUi(this);
}

Dialog_AddValeur::~Dialog_AddValeur()
{
    delete ui;
}
