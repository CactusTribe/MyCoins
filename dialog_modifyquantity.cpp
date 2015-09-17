#include "dialog_modifyquantity.h"
#include "ui_dialog_modifyquantity.h"

Dialog_ModifyQuantity::Dialog_ModifyQuantity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ModifyQuantity)
{
    ui->setupUi(this);
}

Dialog_ModifyQuantity::Dialog_ModifyQuantity(int maxRemove, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ModifyQuantity), m_maxRemove(maxRemove)
{
    ui->setupUi(this);

    this->setWindowTitle("Remove quantity");
    ui->spinBoxQuantity->setRange(0, maxRemove);
    ui->labelMax->setText(QString::number(maxRemove));
    ui->label_5->setPixmap(QPixmap(":/resources/img/resources/img/Minus.png"));

}

Dialog_ModifyQuantity::~Dialog_ModifyQuantity()
{
    delete ui;
}
