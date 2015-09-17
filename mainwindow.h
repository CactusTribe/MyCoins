#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonSettings_clicked();

    void on_pushButtonAdd_clicked();

    void on_pushButtonUpdate_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonAddStock_clicked();

    void on_pushButtonRemove_clicked();

    void on_pushButtonOpenViewer_clicked();

    void on_pushButtonSearch_clicked();

    void on_pushButtonResetFilters_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
