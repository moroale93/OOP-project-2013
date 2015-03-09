#include "dbview.h"
#include "ui_dbview.h"

dbView::dbView(QDialog *parent) : QDialog(parent), ui(new Ui::dbView),idfGB("qDB home",this),otherActionGB("qDB other",this),tipoElettrCB(this),ProduttoreLbl("Produttore:",this),
ProduttoreLE(this),AltezzaLbl("Altezza:",this),AltezzaLE(this),LarghezzaLbl("Larghezza:",this),LarghezzaLE(this),
    ProfonditaLbl("Profondità:",this),ProfonditaLE(this),ConsumoLbl("Consumo:",this),ConsumoLE(this),kwhLbl("kWh",this),PrezzoLbl("Prezzo:",this),
    PrezzoLE(this),EuroLbl("euro",this),el(this),inserimentoPBtn("Inserisci",this),cancellazionePBtn("Cancella",this),
    ricercaPBtn("Cerca",this),modificaPBtn("Modifica",this),printPBtn("Stampa DB",this),frighiBtn("Stampa Frighi",this),lavastBtn("Stampa Lavast",this),
    apriBtn("Apri",this),saveBtn("Salva",this){

    int altezzaLbl=12;
    int larghezzaLbl=85;
    int altezzaLE=15;
    int larghezzaLE=170;
    int discostamento=30;

    ui->setupUi(this);
    idfGB.setGeometry(15,2,320,295);
    idfGB.setStyleSheet("border: 2px solid gray;"
                        "border-radius: 7px;"
                        "border-color:blue;");

    otherActionGB.setGeometry(350,2,120,235);
    otherActionGB.setStyleSheet("border: 2px solid gray;"
                                "border-radius: 7px;"
                                "border-color:blue;");
    idfGB.show();
    tipoElettrCB.setGeometry(30,20,290,20);
    tipoElettrCB.addItem("Frigorifero");
    tipoElettrCB.addItem("Lavastoviglie");
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
    kwhLbl.setGeometry(30+90+larghezzaLE+5,60+discostamento*4,22,altezzaLbl);
    PrezzoLbl.setGeometry(30,60+discostamento*5,larghezzaLbl,altezzaLbl);
    PrezzoLE.setGeometry(30+90,58+discostamento*5,larghezzaLE,altezzaLE);
    EuroLbl.setGeometry(30+90+larghezzaLE+5,58+discostamento*5,22,altezzaLE);
    el.setGeometry(30,58+discostamento*6,80,altezzaLbl+2);

    int dimBtn=90;
    inserimentoPBtn.setGeometry(30,58+discostamento*7,dimBtn,25);
    cancellazionePBtn.setGeometry(30+dimBtn+10,58+discostamento*7,dimBtn,25);
    ricercaPBtn.setGeometry(30+dimBtn+dimBtn+20,58+discostamento*7,dimBtn,25);

    modificaPBtn.setGeometry(360,25,100,25);
    printPBtn.setGeometry(360,60,100,25);
    frighiBtn.setGeometry(360,95,100,25);
    lavastBtn.setGeometry(360,130,100,25);
    apriBtn.setGeometry(360,165,100,25);
    saveBtn.setGeometry(360,200,100,25);

    outView.resize(600,350);
    editView.resize(670,300);
    outfrigo.resize(820,350);
    outlavast.resize(820,350);

    QDialog::connect(&tipoElettrCB, SIGNAL(activated(int)),&el, SLOT(showField(int)));

    QDialog::connect(&inserimentoPBtn, SIGNAL(clicked()),SLOT(insertClick()));
    QDialog::connect(&cancellazionePBtn, SIGNAL(clicked()),SLOT(deleteClick()));
    QDialog::connect(&ricercaPBtn, SIGNAL(clicked()),SLOT(findClick()));
    QDialog::connect(&modificaPBtn, SIGNAL(clicked()),SLOT(editClick()));
    QDialog::connect(&printPBtn, SIGNAL(clicked()),SLOT(printClick()));
    QDialog::connect(this,SIGNAL(outViewRequest(QString)),&outView,SLOT(setText(QString)));
    QDialog::connect(&editView,SIGNAL(modificaFrigoClick(double,double,double,double,int,QString,double,double,double,double,double,int,QString,double)),SLOT(FrigoClick(double,double,double,double,int,QString,double,double,double,double,double,int,QString,double)));
    QDialog::connect(&editView,SIGNAL(modificaLavastClick(double,double,double,double,int,QString,int,double,double,double,double,int,QString,int)),SLOT(LavastClick(double,double,double,double,int,QString,int,double,double,double,double,int,QString,int)));
    QDialog::connect(this,SIGNAL(outputFrighiSgnl(Container<frigorifero>)),&outfrigo,SLOT(outputFrighi(Container<frigorifero>)));
    QDialog::connect(&frighiBtn,SIGNAL(clicked()),SLOT(outFrigoClickSlot()));
    QDialog::connect(this,SIGNAL(outputLavastSgnl(Container<lavastoviglie>)),&outlavast,SLOT(outputLavast(Container<lavastoviglie>)));
    QDialog::connect(&lavastBtn,SIGNAL(clicked()),SLOT(outLavastClickSlot()));
    QDialog::connect(&apriBtn,SIGNAL(clicked()),SLOT(openClick()));
    QDialog::connect(&saveBtn,SIGNAL(clicked()),SLOT(saveClick()));
}

void dbView::insertClick(){
    try{
        if(tipoElettrCB.currentIndex()==0){
           if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.TempLE.text()!=""){
               emit insertFrigoClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getTemperatura());
                alertOutput("Frigoriforo inserito nel database");
            }
            else alertOutput("Compila tutti i campi");
        }
        else if(tipoElettrCB.currentIndex()==1){
            if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.ProgrammiLE.text()!=""){
                emit insertLavastClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getProgrammi());
                alertOutput("Lavastoviglie inserito nel database");
            }
            else alertOutput("Compila tutti i campi");
        }
    }
    catch(err_sint e){
        alertOutput("Sono presenti campi con errori sintattici");
        return;
    }
    eraseField();
}

void dbView::deleteClick(){
    if(QMessageBox::warning(this, "qDB",
                       "Il dato verrà permanentemente cancellato.\n"
                          "Vuoi veramente cancellarlo?",
                       QMessageBox::Yes | QMessageBox::No)==QMessageBox::Yes){
        try{
            if(tipoElettrCB.currentIndex()==0){
                if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.TempLE.text()!=""){
                    emit deleteFrigoClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getTemperatura());
                }
                else alertOutput("Compila tutti i campi");
            }
            else if(tipoElettrCB.currentIndex()==1){
                if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.ProgrammiLE.text()!=""){
                    emit deleteLavastClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getProgrammi());
                }
                else alertOutput("Compila tutti i campi");
            }
        }
        catch(err_sint e){
            alertOutput("Sono presenti campi con errori sintattici");
            return;
        }
        eraseField();
    }
}

void dbView::findClick(){
    try{
        if(tipoElettrCB.currentIndex()==0){
            if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.TempLE.text()!=""){
                emit findFrigoClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getTemperatura());
            }
            else alertOutput("Compila tutti i campi");
        }
        else if(tipoElettrCB.currentIndex()==1){
            if(ProduttoreLE.text()!="" && AltezzaLE.text()!="" && LarghezzaLE.text()!="" && ProfonditaLE.text()!="" && ConsumoLE.text()!="" && PrezzoLE.text()!="" && el.ProgrammiLE.text()!=""){
                emit findLavastClick(getPrezzo(),getAletezza(),getLarghezza(),getProfondita(),getConsumo(),getProduttore(),getProgrammi());
            }
            else alertOutput("Compila tutti i campi");
        }
    }
    catch(err_sint e){
        alertOutput("Sono presenti campi con errori sintattici");
        return;
    }
}

void dbView::editClick(){
    editView.show();
}

void dbView::printClick(){
    emit printDBClick();
}

void dbView::alertOutput(QString in){
    QMessageBox::warning(this, "qDB",in, QMessageBox::Ok);
}

void dbView::viewOutput(QString in){
    outView.show();
    emit outViewRequest(in);
}

dbView::~dbView()
{
    delete ui;
}

void dbView::LavastClick(double pr, double alt, double lar, double prof, int kw, QString prod,int prg,double prm, double altm, double larm, double profm, int kwm, QString prodm,int prgm){
    emit editLavastClick(pr, alt, lar, prof, kw, prod, prg, prm, altm, larm, profm, kwm, prodm, prgm);
}

void dbView::FrigoClick(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin,double prm, double altm, double larm, double profm, int kwm, QString prodm,double tempMinm){
    emit editFrigoClick(pr, alt, lar, prof, kw, prod, tempMin, prm, altm, larm, profm, kwm, prodm, tempMinm);
}

void dbView::eraseField(){
    ProduttoreLE.setText("");
    AltezzaLE.setText("");
    LarghezzaLE.setText("");
    ProfonditaLE.setText("");
    ConsumoLE.setText("");
    PrezzoLE.setText("");
    el.eraseField();
}

void dbView::outputFrighi(Container<frigorifero> f){
    emit outputFrighiSgnl(f);
}

void dbView::outFrigoClickSlot(){
    emit outFrigoClick();
    outfrigo.show();
}

void dbView::outputLavast(Container<lavastoviglie> f){
    emit outputLavastSgnl(f);
}

void dbView::outLavastClickSlot(){
    emit outLavastClick();
    outlavast.show();
}

void dbView::openClick(){
    emit openClickSgnl();
}

void dbView::saveClick(){
    emit saveClickSgnl();
}


double dbView::getAletezza()const throw(err_sint){
    bool validate;
    double converted = AltezzaLE.text().toDouble(&validate);
    if(!validate){
        throw err_sint();
    }
    return converted;
}

double dbView::getLarghezza()const throw(err_sint){
bool validate;
double converted = LarghezzaLE.text().toDouble(&validate);
if(!validate)
    throw err_sint();
return converted;
}

double dbView::getProfondita()const throw(err_sint){
    bool validate;
    double converted = ProfonditaLE.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double dbView::getConsumo()const throw(err_sint){
    bool validate;
    double converted = ConsumoLE.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double dbView::getPrezzo()const throw(err_sint){
    bool validate;
    double converted = PrezzoLE.text().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

double dbView::getTemperatura()const throw(err_sint){
    bool validate;
    double converted = el.getTemp().toDouble(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}

int dbView::getProgrammi()const throw(err_sint){
    bool validate;
    int converted = el.getProgr().toInt(&validate);
    if(!validate)
        throw err_sint();
    return converted;
}
