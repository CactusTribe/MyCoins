#ifndef DIALOG_ADDATELIER_H
#define DIALOG_ADDATELIER_H

#include <QDialog>

namespace Ui {
class Dialog_AddAtelier;
}

class Dialog_AddAtelier : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_AddAtelier(QWidget *parent = 0);
    ~Dialog_AddAtelier();

private:
    Ui::Dialog_AddAtelier *ui;
};

#endif // DIALOG_ADDATELIER_H
