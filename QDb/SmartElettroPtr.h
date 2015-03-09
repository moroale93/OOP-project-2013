#ifndef SMELP_H
#define SMELP_H
#include "elettrodomestico.h"
#include "frigorifero.h"
#include "lavastoviglie.h"
#include <iostream>
using namespace std;

class NoElettrodomestico{};

class SmartElettroPtr{
	friend ostream& operator<<(ostream&, const SmartElettroPtr&);
	private:
		elettrodomestico* punt;
    public:
        elettrodomestico& operator*();
		elettrodomestico* operator->();
        const elettrodomestico& operator*()const;
        const elettrodomestico* operator->()const;
        bool operator==(const SmartElettroPtr&)const;
        bool operator!=(const SmartElettroPtr&)const;
        bool operator>(const SmartElettroPtr&)const;
        bool operator<(const SmartElettroPtr&)const;
        SmartElettroPtr(elettrodomestico*); //dunziona anche da convertitore implicito
};

inline ostream& operator<<(ostream& os, const SmartElettroPtr& s){
    os<<*s.punt;
    return os;
}


#endif
