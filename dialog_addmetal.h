#ifndef DIALOG_ADDMETAL_H
#define DIALOG_ADDMETAL_H

#include <QDialog>

namespace Ui {
class Dialog_AddMetal;
}

class Dialog_AddMetal : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_AddMetal(QWidget *parent = 0);
    ~Dialog_AddMetal();

private:
    Ui::Dialog_AddMetal *ui;
};

#endif // DIALOG_ADDMETAL_H
