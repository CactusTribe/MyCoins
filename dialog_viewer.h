#ifndef DIALOG_VIEWER_H
#define DIALOG_VIEWER_H

#include <QDialog>

namespace Ui {
class Dialog_Viewer;
}

class Dialog_Viewer : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Viewer(QWidget *parent = 0);
    ~Dialog_Viewer();

private:
    Ui::Dialog_Viewer *ui;
};

#endif // DIALOG_VIEWER_H
