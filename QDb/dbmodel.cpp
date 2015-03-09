#include "dbmodel.h"

void dbmodel::inserisciFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin){
    db.insert(new frigorifero(pr,alt,lar,prof,kw,prod.toStdString(),tempMin));
}

void dbmodel::inserisciLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg){
    db.insert(new lavastoviglie(pr,alt,lar,prof,kw,prod.toStdString(),prg));
}

void dbmodel::rimuoviFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin){
    bool result=db.remove(new frigorifero(pr,alt,lar,prof,kw,prod.toStdString(),tempMin));
    if(result)
        emit alertSignal("Frigoriforo rimosso dal database");
    else
        emit alertSignal("Frigoriforo NON presente nel database");
}
void dbmodel::rimuoviLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg){
    bool result=db.remove(new lavastoviglie(pr,alt,lar,prof,kw,prod.toStdString(),prg));
    if(result)
        emit alertSignal("Lavastoviglie rimossa dal database");
    else
        emit alertSignal("Lavastoviglie NON presente nel database");
}

void dbmodel::cercaFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin){
    bool result=db.search(new frigorifero(pr,alt,lar,prof,kw,prod.toStdString(),tempMin));
    if(result)
        emit alertSignal("Frigoriforo presente nel database");
    else
        emit alertSignal("Frigoriforo NON presente nel database");
}

void dbmodel::cercaLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg){
    bool result=db.search(new lavastoviglie(pr,alt,lar,prof,kw,prod.toStdString(),prg));
    if(result)
        emit alertSignal("Lavastoviglie presente nel database");
    else
        emit alertSignal("Lavastoviglie NON presente nel database");
}

void dbmodel::printDB(){
    emit outputSignal(QString(db.content().c_str()));
}

void dbmodel::modificaFrigo(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin,double prm, double altm, double larm, double profm, int kwm, QString prodm,double tempMinm){
    bool result=db.search(new frigorifero(pr,alt,lar,prof,kw,prod.toStdString(),tempMin));
    if(result){
        db.modify(new frigorifero(pr,alt,lar,prof,kw,prod.toStdString(),tempMin),new frigorifero(prm,altm,larm,profm,kwm,prodm.toStdString(),tempMinm));
        emit alertSignal("Elemento modificato");
    }
    else
        emit alertSignal("Frigoriforo NON presente nel database, impossibile modificarlo");
}

void dbmodel::modificaLavastoviglie(double pr, double alt, double lar, double prof, int kw, QString prod,int prg,double prm, double altm, double larm, double profm, int kwm, QString prodm,int prgm){
    bool result=db.modify(new lavastoviglie(pr,alt,lar,prof,kw,prod.toStdString(),prg),new lavastoviglie(prm,altm,larm,profm,kwm,prodm.toStdString(),prgm));
    if(result){
        emit alertSignal("Elemento modificato");
    }
    else
        emit alertSignal("Lavastoviglie NON presente nel database, impossibile modificarlo");
}

void dbmodel::stampaTuttiIFrigoriferi(){
    Container<frigorifero> ret;
    Container<SmartElettroPtr>::const_iteratore it=db.begin();
    for(;it!=db.end();++it){
        frigorifero* f=dynamic_cast<frigorifero*>(&(**it));
        if(f!=0){
            ret.insert(*f);
        }
    }
    emit outputFrighi(ret);
}

void dbmodel::stampaTutteLavastoviglie(){
    Container<lavastoviglie> ret;
    Container<SmartElettroPtr>::const_iteratore it=db.begin();
    for(;it!=db.end();++it){
        lavastoviglie* l=dynamic_cast<lavastoviglie*>(&(**it));
        if(l!=0){
            ret.insert(*l);
        }
    }
    emit outputLavast(ret);
}

Container<SmartElettroPtr>* dbmodel::getDB(){
    return &db;
}

void dbmodel::svuotaDB(){
    Container<SmartElettroPtr>::const_iteratore it=db.begin();
    for(;it!=db.end();++it){
        db.remove(*it);
    }
}
