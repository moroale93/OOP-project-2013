#include <QtGui/QApplication>
#include "dbview.h"
#include "dbmodel.h"
#include "dbcontrol.h"
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon icon("ico.png");
    a.setWindowIcon(icon);
    dbView dbv;
    dbv.resize(480,305);
    dbv.show();
    dbmodel dbm;
    dbcontrol dbc(&dbm,&dbv);

    return a.exec();
}
