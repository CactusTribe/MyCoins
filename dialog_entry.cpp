#include "dialog_entry.h"
#include "ui_dialog_entry.h"

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