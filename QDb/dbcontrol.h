#ifndef DBCONTROL_H
#define DBCONTROL_H
#include "dbview.h"
#include "dbmodel.h"
#include <QObject>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QFile>
#include <QDebug>
#include "Container.h"
#include "SmartElettroPtr.h"
#include "elettrodomestico.h"
#include "frigorifero.h"
#include "lavastoviglie.h"
#include <QFileDialog>

class dbcontrol:public QObject{
    Q_OBJECT
private:
    dbmodel* model;
    dbView* view;
    void popolaBilanciato(elettrodomestico ** A, int p, int r);
private slots:
    void caricaDB();
    void salvaDB();
public:
    dbcontrol(dbmodel* m, dbView* v);
    inline ~dbcontrol(){}
};


#endif // DBCONTROL_H
