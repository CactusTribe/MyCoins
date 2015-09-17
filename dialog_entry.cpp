#include "dialog_entry.h"
#include "ui_dialog_entry.h"

#include "dialog_addvaleur.h"
#include "dialog_addtype.h"
#include "dialog_addperiode.h"
#include "dialog_addmetal.h"
#include "dialog_addetat.h"
#include "dialog_addatelier.h"

Dialog_Entry::Dialog_Entry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Entry)
{
    ui->setupUi(this);
}

Dialog_Entry::Dialog_Entry(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Entry), m_id(id)
{
    ui->setupUi(this);

    this->setWindowTitle("Modifier monnaie");
    ui->label_Title->setText("Mofidier la monnaie");
    ui->label_5->setPixmap(QPixmap(":/resources/img/resources/img/Update.png"));
}

Dialog_Entry::~Dialog_Entry()
{
    delete ui;
}

void Dialog_Entry::on_pushButtonPhotoA_clicked()
{

}

void Dialog_Entry::on_pushButtonPhotoR_clicked()
{

}

void Dialog_Entry::on_pushButtonAddValeur_clicked()
{
    Dialog_AddValeur dialog_addvaleur;
    dialog_addvaleur.setModal(true);
    dialog_addvaleur.exec();
}

void Dialog_Entry::on_pushButtonAddType_clicked()
{
    Dialog_AddType dialog_addtype;
    dialog_addtype.setModal(true);
    dialog_addtype.exec();
}

void Dialog_Entry::on_pushButtonAddAtelier_clicked()
{
    Dialog_AddAtelier dialog_addatelier;
    dialog_addatelier.setModal(true);
    dialog_addatelier.exec();
}

void Dialog_Entry::on_pushButtonAddPeriode_clicked()
{
    Dialog_AddPeriode dialog_addperiode;
    dialog_addperiode.setModal(true);
    dialog_addperiode.exec();
}

void Dialog_Entry::on_pushButtonAddEtat_clicked()
{
    Dialog_AddEtat dialog_addetat;
    dialog_addetat.setModal(true);
    dialog_addetat.exec();
}

void Dialog_Entry::on_pushButtonAddMetal_clicked()
{
    Dialog_AddMetal dialog_addmetal;
    dialog_addmetal.setModal(true);
    dialog_addmetal.exec();
}
