#include "mainwindow.h"
#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    qDebug() << QThread::currentThreadId() << "______1";
    return a.exec();
}
