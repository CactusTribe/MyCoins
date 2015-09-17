#ifndef DIALOG_ADDPERIODE_H
#define DIALOG_ADDPERIODE_H

#include <QDialog>

namespace Ui {
class Dialog_AddPeriode;
}

class Dialog_AddPeriode : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_AddPeriode(QWidget *parent = 0);
    ~Dialog_AddPeriode();

private:
    Ui::Dialog_AddPeriode *ui;
};

#endif // DIALOG_ADDPERIODE_H
