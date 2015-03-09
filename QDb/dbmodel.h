#ifndef DBMODEL_H
#define DBMODEL_H
#include "Container.h"
#include "SmartElettroPtr.h"
#include "elettrodomestico.h"
#include "frigorifero.h"
#include "lavastoviglie.h"
#include <QObject>

class dbmodel:public QObject{
    Q_OBJECT
private:
    Container<SmartElettroPtr> db;

public:
    inline ~dbmodel(){}
    Container<SmartElettroPtr>* getDB();
    void svuotaDB();
    inline int size()const{return db.size();}
public slots:
    void inserisciLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg);
    void inserisciFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin);
    void rimuoviFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin);
    void rimuoviLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg);
    void cercaFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin);
    void cercaLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg);
    void modificaFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin,double prm, double altm, double larm, double profm, int kwm, QString prodm,double tempMinm);
    void modificaLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg,double prm, double altm, double larm, double profm, int kwm, QString prodm,int prgm);
    void printDB();
    void stampaTuttiIFrigoriferi();
    void stampaTutteLavastoviglie();
signals:
    void alertSignal(QString);
    void outputSignal(QString);
    void outputFrighi(Container<frigorifero>);
    void outputLavast(Container<lavastoviglie>);
};

#endif // DBMODEL_H
