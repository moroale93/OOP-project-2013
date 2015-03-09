#ifndef ELETTR_H
#define ELETTR_H
#include <string>
#include <iostream>
#include <QDebug>
using namespace std;

class elettrodomestico{
	friend ostream& operator<<(ostream&, const elettrodomestico&);
	protected:
		double prezzo, altezza, larghezza, profondita;
		int kWh;
		string produttore;
		virtual string print() const=0;
    public:
		virtual string tipoEl()const=0;
		virtual char classeRisparmioEnergetico() const=0;
        double getPrezzo()const;
		double getAltezza()const;
		double getLarghezza()const;
		double getProfondita()const;
		int getkWh()const;
		string getProduttore()const;
		elettrodomestico(double pr, double alt, double lar, double prof, int kw, string prod);
		elettrodomestico(const elettrodomestico&);
		virtual bool operator==(const elettrodomestico&)const;
        virtual bool operator!=(const elettrodomestico&)const;
        virtual bool operator <(const elettrodomestico&)const;
        virtual bool operator >(const elettrodomestico&)const;
};

inline ostream& operator<<(ostream& os, const elettrodomestico& e){
    os<<e.tipoEl()<<' '<<e.produttore<<" classe "<<e.classeRisparmioEnergetico()<<" prezzo: "<<e.prezzo<<"€ "<<"consumo: "<<e.kWh<<"kWh dimensioni: "<<e.altezza<<'x'<<e.larghezza<<'x'<<e.profondita<<" "<<e.print();//utilizza la print virtuale
	return os;
}

#endif
