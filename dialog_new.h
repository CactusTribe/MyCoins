#ifndef DIALOG_NEW_H
#define DIALOG_NEW_H

#include <QDialog>

namespace Ui {
class Dialog_New;
}

class Dialog_New : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_New(QWidget *parent = 0);
    ~Dialog_New();

private:
    Ui::Dialog_New *ui;
};

#endif // DIALOG_NEW_H
