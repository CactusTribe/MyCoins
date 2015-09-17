#ifndef DIALOG_MODIFYQUANTITY_H
#define DIALOG_MODIFYQUANTITY_H

#include <QDialog>

namespace Ui {
class Dialog_ModifyQuantity;
}

class Dialog_ModifyQuantity : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_ModifyQuantity(QWidget *parent = 0);
    Dialog_ModifyQuantity(int maxRemove, QWidget *parent = 0);
    ~Dialog_ModifyQuantity();

private:
    Ui::Dialog_ModifyQuantity *ui;
    int m_maxRemove;
};

#endif // DIALOG_MODIFYQUANTITY_H
