//#include <QtGui>
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
	//test org
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
