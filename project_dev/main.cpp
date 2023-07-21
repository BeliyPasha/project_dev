#include "mainwindowproject_dev.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowProject_dev w;
    w.show();
    return a.exec();
}
