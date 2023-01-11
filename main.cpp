

#include "mainwindow.h"
#include <QApplication>
#include "class/Myhead.h"
int main(int argc, char *argv[])
{

    readFile_to_List();
    readFile_to_List_medicine();
    readFile_to_List_staff();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
