#ifndef DIALOG_UPDATE_H
#define DIALOG_UPDATE_H

#include <QDialog>

namespace Ui {
class Dialog_Update;
}

class Dialog_Update : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Update(QWidget *parent = 0);
    ~Dialog_Update();

private:
    Ui::Dialog_Update *ui;
};

#endif // DIALOG_UPDATE_H
