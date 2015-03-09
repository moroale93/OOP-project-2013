#include "lavastoviglie.h"

bool lavastoviglie::operator==(const lavastoviglie& l)const{
    if(elettrodomestico::operator==(l) && programmi==l.programmi)
        return true;
    return false;
}

int lavastoviglie::getProgrammi()const{
    return programmi;
}

char lavastoviglie::classeRisparmioEnergetico()const{
    if(kWh<247)
        return 'A';
    if(kWh>=247&&kWh<299)
        return 'B';
    if(kWh>=299&&kWh<351)
        return 'C';
    if(kWh>=351&&kWh<403)
        return 'D';
    if(kWh>=403&&kWh<455)
        return 'E';
    if(kWh>=455&&kWh<507)
        return 'F';
    else
        return 'G';
}

lavastoviglie::lavastoviglie(double pr, double alt, double lar, double prof, int kw, string prod,int prg):elettrodomestico(pr, alt, lar, prof, kw, prod),programmi(prg){

}

lavastoviglie::lavastoviglie(const lavastoviglie& f):elettrodomestico(f), programmi(f.programmi){

}
