#include "frigorifero.h"


bool frigorifero::operator==(const frigorifero& f)const{
    if(elettrodomestico::operator==(f) && temperaturaMin==f.temperaturaMin)
        return true;
    return false;
}

double frigorifero::getTemperaturaMinima()const{
    return temperaturaMin;
}

char frigorifero::classeRisparmioEnergetico()const{
    if(kWh<300)
        return 'A';
    if(kWh>=300&&kWh<400)
        return 'B';
    if(kWh>=400&&kWh<560)
        return 'C';
    if(kWh>=560&&kWh<625)
        return 'D';
    if(kWh>=625&&kWh<688)
        return 'E';
    if(kWh>=688&&kWh<781)
        return 'F';
    else
        return 'G';
}

frigorifero::frigorifero(double pr, double alt, double lar, double prof, int kw, string prod, double tempMin):elettrodomestico(pr, alt, lar, prof, kw, prod),temperaturaMin(tempMin){

}

frigorifero::frigorifero(const frigorifero& f):elettrodomestico(f), temperaturaMin(f.temperaturaMin){

}
