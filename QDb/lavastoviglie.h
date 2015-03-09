#ifndef LAVAST_H
#define LAVAST_H
#include "elettrodomestico.h"
#include <string>
#include <sstream>
using namespace std;

class lavastoviglie: public elettrodomestico{
	private:
		int programmi;
	public:
        inline string tipoEl()const{return "lavastoviglie";}
		virtual string print()const{
			stringstream convert;
			convert << programmi;
            return convert.str()+" programmi";
		}
		char classeRisparmioEnergetico()const;
		int getProgrammi()const;
		lavastoviglie(double pr, double alt, double lar, double prof, int kw, string prod,int prg);
		lavastoviglie(const lavastoviglie&);
		bool operator==(const lavastoviglie&)const;
};


#endif
