#include "mainwindow.h"
#include <QFile>
#include <QApplication>
#include <QDir>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT w;
    w.show();
    return a.exec();
}
