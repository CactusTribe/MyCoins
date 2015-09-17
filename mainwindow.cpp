#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialog_settings.h"
#include "dialog_entry.h"
#include "dialog_modifyquantity.h"
#include "dialog_viewer.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSettings_clicked()
{
    Dialog_Settings dialog_settings;
    dialog_settings.setModal(true);
    dialog_settings.exec();
}

void MainWindow::on_pushButtonNew_clicked()
{
    Dialog_Entry dialog_entry;
    dialog_entry.setModal(true);
    dialog_entry.exec();
}

void MainWindow::on_pushButtonUpdate_clicked()
{
    Dialog_Entry dialog_entry(1);
    dialog_entry.setModal(true);
    dialog_entry.exec();
}

void MainWindow::on_pushButtonDelete_clicked()
{

}

void MainWindow::on_pushButtonAdd_clicked()
{
    Dialog_ModifyQuantity dialog_modifyquantity;
    dialog_modifyquantity.setModal(true);
    dialog_modifyquantity.exec();
}

void MainWindow::on_pushButtonRemove_clicked()
{
    Dialog_ModifyQuantity dialog_modifyquantity(5);
    dialog_modifyquantity.setModal(true);
    dialog_modifyquantity.exec();
}

void MainWindow::on_pushButtonOpenViewer_clicked()
{
    Dialog_Viewer dialog_viewer;
    dialog_viewer.setModal(true);
    dialog_viewer.exec();
}

void MainWindow::on_pushButtonSearch_clicked()
{

}

void MainWindow::on_pushButtonResetFilters_clicked()
{

}
