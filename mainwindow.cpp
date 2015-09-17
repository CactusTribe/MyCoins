#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog_settings.h"

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
    Dialog_Settings dialog_Settings;
    dialog_Settings.setModal(true);
    dialog_Settings.exec();
}

void MainWindow::on_pushButtonAdd_clicked()
{

}

void MainWindow::on_pushButtonUpdate_clicked()
{

}

void MainWindow::on_pushButtonDelete_clicked()
{

}

void MainWindow::on_pushButtonAddStock_clicked()
{

}

void MainWindow::on_pushButtonRemove_clicked()
{

}

void MainWindow::on_pushButtonOpenViewer_clicked()
{

}

void MainWindow::on_pushButtonSearch_clicked()
{

}

void MainWindow::on_pushButtonResetFilters_clicked()
{

}
