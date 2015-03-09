#include "loadFieldElettro.h"

loadFieldElettro::loadFieldElettro(QWidget *parent) : QWidget(parent),TempLbl("Temperatura Min:",parent), TempLE(parent),ProgrammiLbl("Programmi:",parent),ProgrammiLE(parent){
    showField(0);
}

void loadFieldElettro::setGeometry(int x, int y, int w, int h){
    TempLbl.setGeometry(x,y+2,85,12);
    TempLE.setGeometry(x+90,y,170,15);
    ProgrammiLbl.setGeometry(x,y+2,85,12);
    ProgrammiLE.setGeometry(x+90,y,170,15);
}

void loadFieldElettro::showField(int value){
    switch(value){
    case 0:
        TempLbl.show();
        TempLE.show();
        ProgrammiLbl.hide();
        ProgrammiLE.hide();
        break;
    case 1:
        ProgrammiLbl.show();
        ProgrammiLE.show();
        TempLbl.hide();
        TempLE.hide();
        break;
    }
}

loadFieldElettro::~loadFieldElettro(){}
