#include "SmartElettroPtr.h"

elettrodomestico& SmartElettroPtr::operator*() {
    return *punt;
}

elettrodomestico* SmartElettroPtr::operator->() {
    return punt;
}

const elettrodomestico& SmartElettroPtr::operator*() const{
    return *punt;
}

const elettrodomestico* SmartElettroPtr::operator->() const{
    return punt;
}

SmartElettroPtr::SmartElettroPtr(elettrodomestico* e):punt(e){

}

bool SmartElettroPtr::operator==(const SmartElettroPtr& s)const{
    frigorifero* fp= dynamic_cast<frigorifero*>(punt);
    if(fp!=0){
        frigorifero* fs= dynamic_cast<frigorifero*>(s.punt);
        if(fs!=0)
            return *fp==*fs;
        else return false;
    }
    else{
        lavastoviglie* lp= dynamic_cast<lavastoviglie*>(punt);
        if(lp!=0){
            lavastoviglie* ls= dynamic_cast<lavastoviglie*>(s.punt);
            if(ls!=0)
                return *lp==*ls;
            else return false;
        }
        else
            throw new NoElettrodomestico();
    }
}

bool SmartElettroPtr::operator!=(const SmartElettroPtr& s)const{
    frigorifero* fp= dynamic_cast<frigorifero*>(punt);
    if(fp!=0){
        frigorifero* fs= dynamic_cast<frigorifero*>(s.punt);
        if(fs!=0)
            return *fp!=*fs;
        else return false;
    }
    else{
        lavastoviglie* lp= dynamic_cast<lavastoviglie*>(punt);
        if(lp!=0){
            lavastoviglie* ls= dynamic_cast<lavastoviglie*>(s.punt);
            if(ls!=0)
                return *lp!=*ls;
            else return false;
        }
        else
            throw new NoElettrodomestico();
    }
}

bool SmartElettroPtr::operator>(const SmartElettroPtr& s)const{
    return *punt>*s.punt;
}

bool SmartElettroPtr::operator<(const SmartElettroPtr& s)const{
    return *punt<*s.punt;
}
