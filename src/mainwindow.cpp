#include "mainwindow.h"

#include <QJsonObject>

#include <QDebug>

#include "lib/knlibdatabase.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    KNLibDatabase *db=new KNLibDatabase(this);
    db->setDatabase("test.db");

    QJsonObject obj;
    obj["test"]=QString("test");

    qDebug()<<obj["test"];
}
