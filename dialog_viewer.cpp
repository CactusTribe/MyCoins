#include "dialog_viewer.h"
#include "ui_dialog_viewer.h"

Dialog_Viewer::Dialog_Viewer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Viewer)
{
    ui->setupUi(this);
}

Dialog_Viewer::~Dialog_Viewer()
{
    delete ui;
}
