#include "editform.h"
#include "ui_editform.h"

editForm::editForm(QDialog *parent) :
    QDialog(parent),ui(new Ui::editForm), tipoElettrCB(this),daModficareGB("Dato Sbagliato",this),ProduttoreLbl("Produttore:",this),
    ProduttoreLE(this),AltezzaLbl("Altezza:",this),AltezzaLE(this),LarghezzaLbl("Larghezza:",this),LarghezzaLE(this),
    ProfonditaLbl("Profondità:",this),ProfonditaLE(this),ConsumoLbl("Consumo:",this),ConsumoLE(this),kwhLbl("kWh",this),PrezzoLbl("Prezzo:",this),
    PrezzoLE(this),EuroLbl("euro",this),el(this),ModificatoGB("Dato Modificato",this),ProduttoreLblM("Produttore:",this),
    ProduttoreLEM(this),AltezzaLblM("Altezza:",this),AltezzaLEM(this),LarghezzaLblM("Larghezza:",this),LarghezzaLEM(this),
    ProfonditaLblM("Profondità:",this),ProfonditaLEM(this),ConsumoLblM("Consumo:",this),ConsumoLEM(this),kwhLblM("kWh",this),PrezzoLblM("Prezzo:",this),
    PrezzoLEM(this),EuroLblM("euro",this),elM(this),modBtn("Completa modifica",this)
{
    ui->setupUi(this);

    int altezzaLbl=12;
    int larghezzaLbl=85;
    int altezzaLE=15;
    int larghezzaLE=170;
    int discostamento=30;

    tipoElettrCB.setGeometry(260,8,150,20);
    tipoElettrCB.addItem("Frigorifero");
    tipoElettrCB.addItem("Lavastoviglie");

    daModficareGB.setGeometry(15,35,320,230);
    daModficareGB.setStyleSheet("border: 2px solid gray;"
                                "border-radius: 9px;"
                                        "border-color:red;");
    ProduttoreLbl.setGeometry(30,60,larghezzaLbl,altezzaLbl);
    ProduttoreLE.setGeometry(30+90,58,larghezzaLE,altezzaLE);
    AltezzaLbl.setGeometry(30,60+discostamento,larghezzaLbl,altezzaLbl);
    AltezzaLE.setGeometry(30+90,58+discostamento,larghezzaLE,altezzaLE);
    LarghezzaLbl.setGeometry(30,60+discostamento*2,larghezzaLbl,altezzaLbl);
    LarghezzaLE.setGeometry(30+90,58+discostamento*2,larghezzaLE,altezzaLE);
    ProfonditaLbl.setGeometry(30,60+discostamento*3,larghezzaLbl,altezzaLbl);
    ProfonditaLE.setGeometry(30+90,58+discostamento*3,larghezzaLE,altezzaLE);
    ConsumoLbl.setGeometry(30,60+discostamento*4,larghezzaLbl,altezzaLbl);
    ConsumoLE.setGeometry(30+90,58+discostamento*4,larghezzaLE,altezzaLE);
    kwhLbl.setGeometry(30+90+larghezzaLE+5,60+discostamento*4,larghezzaLbl,altezzaLbl);
    PrezzoLbl.setGeometry(30,60+discostamento*5,larghezzaLbl,altezzaLbl);
    PrezzoLE.setGeometry(30+90,58+discostamento*5,larghezzaLE,altezzaLE);
    EuroLbl.setGeometry(30+90+larghezzaLE+5,58+discostamento*5,larghezzaLE,altezzaLE);
    el.setGeometry(30,58+discostamento*6,80,altezzaLbl+2);

    ModificatoGB.setGeometry(15+60+90+larghezzaLE+5,35,320,230);
    ModificatoGB.setStyleSheet("border: 2px solid gray;"
                               "border-radius: 9px;"
                                       "border-color:lime;");
    ProduttoreLblM.setGeometry(60+30+90+larghezzaLE+5,60,larghezzaLbl,altezzaLbl);
    ProduttoreLEM.setGeometry(60+90+30+90+larghezzaLE+5,58,larghezzaLE,altezzaLE);
    AltezzaLblM.setGeometry(60+30+90+larghezzaLE+5,60+discostamento,larghezzaLbl,altezzaLbl);
    AltezzaLEM.setGeometry(60+90+30+90+larghezzaLE+5,58+discostamento,larghezzaLE,altezzaLE);
    LarghezzaLblM.setGeometry(60+30+90+larghezzaLE+5,60+discostamento*2,larghezzaLbl,altezzaLbl);
    LarghezzaLEM.setGeometry(60+90+30+90+larghezzaLE+5,58+discostamento*2,larghezzaLE,altezzaLE);
    ProfonditaLblM.setGeometry(60+30+90+larghezzaLE+5,60+discostamento*3,larghezzaLbl,altezzaLbl);
    ProfonditaLEM.setGeometry(60+90+30+90+larghezzaLE+5,58+discostamento*3,larghezzaLE,altezzaLE);
    ConsumoLblM.setGeometry(60+30+90+larghezzaLE+5,60+discostamento*4,larghezzaLbl,altezzaLbl);
    ConsumoLEM.setGeometry(60+90+30+90+larghezzaLE+5,58+discostamento*4,larghezzaLE,altezzaLE);
    kwhLblM.setGeometry(60+90+larghezzaLE+5+30+90+larghezzaLE+5,60+discostamento*4,larghezzaLbl,altezzaLbl);
    PrezzoLblM.setGeometry(60+30+90+larghezzaLE+5,60+discostamento*5,larghezzaLbl,altezzaLbl);
    PrezzoLEM.setGeometry(60+90+30+90+larghezzaLE+5,58+discostamento*5,larghezzaLE,altezzaLE);
    EuroLblM.setGeometry(60+90+larghezzaLE+5+30+90+larghezzaLE+5,58+discostamento*5,larghezzaLE,altezzaLE);
    elM.setGeometry(60+30+90+larghezzaLE+5,58+discostamento*6,80,altezzaLbl+2);

    modBtn.setGeometry(275,270,120,25);

    QDialog::connect(&tipoElettrCB, SIGNAL(activated(int)),&el, SLOT(showField(int)));
    QDialog::connect(&tipoElettrCB, SIGNAL(activated(int)),&elM, SLOT(showField(int)));
    QDialog::connect(&modBtn,SIGNAL(clicked()),SLOT(modificaClick()));
}

editForm::~editForm()
{
    delete ui;
}

void editForm::print(){
    el.showField(0);
    elM.showField(0);
}

void editForm::modificaClick(){
    if(QMessageBox::warning(this, "qDB",
                       "Il dato verrà modificato.\n"
                          "Vuoi veramente modificarlo?",
                       QMessageBox::Yes | QMessageBox::No)==QMessageBox::Yes){
        try{
            if(tipoElettrCB.currentIndex()==0){
                if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.TempLE.text()!="" && ProduttoreLEM.text()!="" && AltezzaLEM.text()!="" && LarghezzaLEM.text()!="" && ProfonditaLEM.text()!="" && ConsumoLEM.text()!="" && PrezzoLEM.text()!="" && elM.TempLE.text()!=""){
                    emit modificaFrigoClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getTemperatura(),getPrezzoMod(),getAletezzaMod(),getLarghezzaMod(),getProfonditaMod(),getConsumoMod(),getProduttoreMod(),getTemperaturaMod());
                }
                QMessageBox::warning(this, "qDB","Compila tutti i campi", QMessageBox::Ok);
            }
            else if(tipoElettrCB.currentIndex()==1){
                if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.ProgrammiLE.text()!="" && ProduttoreLEM.text()!="" && AltezzaLEM.text()!="" && LarghezzaLEM.text()!="" && ProfonditaLEM.text()!="" && ConsumoLEM.text()!="" && PrezzoLEM.text()!="" && elM.ProgrammiLE.text()!=""){
                    emit modificaLavastClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getProgrammi(),getPrezzoMod(),getAletezzaMod(),getLarghezzaMod(),getProfonditaMod(),getConsumoMod(),getProduttoreMod(),getProgrammiMod());
                }
                QMessageBox::warning(this, "qDB","Compila tutti i campi", QMessageBox::Ok);
            }
        }
        catch(err_sint e){
            QMessageBox::warning(this, "qDB","Sono presenti campi con errori sintattici", QMessageBox::Ok);
            return;
        }
        eraseField();
    }
}

void editForm::eraseField(){
    ProduttoreLE.setText("");
    AltezzaLE.setText("");
    LarghezzaLE.setText("");
    ProfonditaLE.setText("");
    ConsumoLE.setText("");
    PrezzoLE.setText("");
    el.eraseField();
    ProduttoreLEM.setText("");
    AltezzaLEM.setText("");
    LarghezzaLEM.setText("");
    ProfonditaLEM.setText("");
    ConsumoLEM.setText("");
    PrezzoLEM.setText("");
    elM.eraseField();
}

double editForm::getAletezza()const throw(err_sint){
    bool validate;
    double converted = AltezzaLE.text().toDouble(&validate);
    if(!validate){
        throw err_sint();
    }
    return converted;
}

double editForm::getLarghezza()const throw(err_sint){
bool validate;
double converted = LarghezzaLE.text().toDouble(&validate);
if(!validate)
    throw err_sint();
return converted;
}

double editForm::getProfondita()const throw(err_sint){
    bool validate;
    double converted = ProfonditaLE.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double editForm::getConsumo()const throw(err_sint){
    bool validate;
    double converted = ConsumoLE.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double editForm::getPrezzo()const throw(err_sint){
    bool validate;
    double converted = PrezzoLE.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double editForm::getTemperatura()const throw(err_sint){
    bool validate;
    double converted = el.getTemp().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

int editForm::getProgrammi()const throw(err_sint){
    bool validate;
    int converted = el.getProgr().toInt(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double editForm::getAletezzaMod()const throw(err_sint){
    bool validate;
    double converted = AltezzaLEM.text().toDouble(&validate);
    if(!validate){
        throw err_sint();
    }
    return converted;
}

double editForm::getLarghezzaMod()const throw(err_sint){
bool validate;
double converted = LarghezzaLEM.text().toDouble(&validate);
if(!validate)
    throw err_sint();
return converted;
}

double editForm::getProfonditaMod()const throw(err_sint){
    bool validate;
    double converted = ProfonditaLEM.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double editForm::getConsumoMod()const throw(err_sint){
    bool validate;
    double converted = ConsumoLEM.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double editForm::getPrezzoMod()const throw(err_sint){
    bool validate;
    double converted = PrezzoLEM.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double editForm::getTemperaturaMod()const throw(err_sint){
    bool validate;
    double converted = elM.getTemp().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

int editForm::getProgrammiMod()const throw(err_sint){
    bool validate;
    int converted = elM.getProgr().toInt(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}
