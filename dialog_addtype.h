#ifndef DIALOG_ADDTYPE_H
#define DIALOG_ADDTYPE_H

#include <QDialog>

namespace Ui {
class Dialog_AddType;
}

class Dialog_AddType : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_AddType(QWidget *parent = 0);
    ~Dialog_AddType();

private:
    Ui::Dialog_AddType *ui;
};

#endif // DIALOG_ADDTYPE_H
