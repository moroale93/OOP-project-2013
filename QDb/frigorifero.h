#ifndef FRIGO_H
#define FRIGO_H
#include "elettrodomestico.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class frigorifero: public elettrodomestico{
	private:
		double temperaturaMin;
        virtual string tipoEl()const{return "frigorifero";}
		virtual string print()const{
			stringstream convert;
			convert << temperaturaMin;
            return "temperatura minima: "+convert.str()+"°C";
		}
	public:
		char classeRisparmioEnergetico()const;
		double getTemperaturaMinima()const;
		frigorifero(double pr, double alt, double lar, double prof, int kw, string prod,double tempMin);
		frigorifero(const frigorifero&);
		bool operator==(const frigorifero&)const;
};



#endif
