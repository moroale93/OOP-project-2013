#include "elettrodomestico.h"

bool elettrodomestico::operator==(const elettrodomestico& e)const{
    if(prezzo==e.prezzo && altezza==e.altezza && larghezza==e.larghezza && profondita==e.profondita && kWh==e.kWh && produttore==e.produttore)
        return true;
    return false;
}

bool elettrodomestico::operator!=(const elettrodomestico& e)const{
    if(!(prezzo==e.prezzo && altezza==e.altezza && larghezza==e.larghezza && profondita==e.profondita && kWh==e.kWh && produttore==e.produttore))
        return true;
    return false;
}

double elettrodomestico::getPrezzo()const{
    return prezzo;
}

double elettrodomestico::getAltezza()const{
    return altezza;
}

double elettrodomestico::getLarghezza()const{
    return larghezza;
}

double elettrodomestico::getProfondita()const{
    return profondita;
}

int elettrodomestico::getkWh()const{
    return kWh;
}

string elettrodomestico::getProduttore()const{
    return produttore;
}

elettrodomestico::elettrodomestico(double pr, double alt, double lar, double prof, int kw, string prod):prezzo(pr), altezza(alt), larghezza(lar), profondita(prof), kWh(kw), produttore(prod){

}

elettrodomestico::elettrodomestico(const elettrodomestico& e):prezzo(e.prezzo), altezza(e.altezza), larghezza(e.larghezza), profondita(e.profondita), kWh(e.kWh), produttore(e.produttore){

}

bool elettrodomestico::operator <(const elettrodomestico& e)const{
    return prezzo<e.prezzo;
}

bool elettrodomestico::operator >(const elettrodomestico& e)const{
    return prezzo>e.prezzo;
}
