#ifndef DIALOG_ADDVALEUR_H
#define DIALOG_ADDVALEUR_H

#include <QDialog>

namespace Ui {
class Dialog_AddValeur;
}

class Dialog_AddValeur : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_AddValeur(QWidget *parent = 0);
    ~Dialog_AddValeur();

private:
    Ui::Dialog_AddValeur *ui;
};

#endif // DIALOG_ADDVALEUR_H
