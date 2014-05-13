#include "mainwindow.h"

#include "lib/knlibdatabase.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    KNLibDatabase *db=new KNLibDatabase(this);
    db->setDatabase("test.db");

    ;
}
