#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dialog_settings.h"
#include "dialog_new.h"
#include "dialog_update.h"

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
    Dialog_New dialog_new;
    dialog_new.setModal(true);
    dialog_new.exec();
}

void MainWindow::on_pushButtonUpdate_clicked()
{
    Dialog_Update dialog_update;
    dialog_update.setModal(true);
    dialog_update.exec();
}

void MainWindow::on_pushButtonDelete_clicked()
{

}

void MainWindow::on_pushButtonAdd_clicked()
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
