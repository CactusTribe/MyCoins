#include "mainwindow.h"
#include <QApplication>

// Point de départ de l'application
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
