#ifndef DIALOG_ADDETAT_H
#define DIALOG_ADDETAT_H

#include <QDialog>

namespace Ui {
class Dialog_AddEtat;
}

class Dialog_AddEtat : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_AddEtat(QWidget *parent = 0);
    ~Dialog_AddEtat();

private:
    Ui::Dialog_AddEtat *ui;
};

#endif // DIALOG_ADDETAT_H
