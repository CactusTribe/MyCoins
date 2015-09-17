#ifndef DIALOG_ENTRY_H
#define DIALOG_ENTRY_H

#include <QDialog>

namespace Ui {
class Dialog_Entry;
}

class Dialog_Entry : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Entry(QWidget *parent = 0);
    Dialog_Entry(int id, QWidget *parent = 0);
    ~Dialog_Entry();

private slots:
    void on_pushButtonPhotoA_clicked();

    void on_pushButtonPhotoR_clicked();

    void on_pushButtonAddValeur_clicked();

    void on_pushButtonAddType_clicked();

    void on_pushButtonAddAtelier_clicked();

    void on_pushButtonAddPeriode_clicked();

    void on_pushButtonAddEtat_clicked();

    void on_pushButtonAddMetal_clicked();

private:
    Ui::Dialog_Entry *ui;
    int m_id;
};

#endif // DIALOG_ENTRY_H
