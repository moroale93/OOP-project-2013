#include "dbcontrol.h"

dbcontrol::dbcontrol(dbmodel* m, dbView* v): model(m), view(v){
    // connette il segnale generato dalla pressione del tasto inserisci quando è selezionato frigorifero allo slot del modello che inserisce il frigo nel Container
    QObject::connect(view,SIGNAL(insertFrigoClick(double,double,double,double,int,QString,double)),model,SLOT(inserisciFrigo(double,double,double,double,int,QString,double)));
    // connette il segnale generato dalla pressione del tasto inserisci quando è selezionato lavastoviglie allo slot del modello che inserisce la lavastoviglie nel Container
    QObject::connect(view,SIGNAL(insertLavastClick(double,double,double,double,int,QString,int)),model,SLOT(inserisciLavastoviglie(double,double,double,double,int,QString,int)));

    // connette il segnale generato dalla pressione del tasto rimuovi quando è selezionato frigorifero allo slot del modello che rimuove il frigo dal Container
    QObject::connect(view,SIGNAL(deleteFrigoClick(double,double,double,double,int,QString,double)),model,SLOT(rimuoviFrigo(double,double,double,double,int,QString,double)));
    // connette il segnale generato dalla pressione del tasto rimuovi quando è selezionato lavastoviglie allo slot del modello che rimuove la lavastoviglie dal Container
    QObject::connect(view,SIGNAL(deleteLavastClick(double,double,double,double,int,QString,int)),model,SLOT(rimuoviLavastoviglie(double,double,double,double,int,QString,int)));

    // connette il segnale generato dalla pressione del tasto cerca quando è selezionato frigorifero allo slot del modello che cerca il frigo dal Container
    QObject::connect(view,SIGNAL(findFrigoClick(double,double,double,double,int,QString,double)),model,SLOT(cercaFrigo(double,double,double,double,int,QString,double)));
    // connette il segnale generato dalla pressione del tasto cerca quando è selezionato lavastoviglie allo slot del modello che cerca la lavastoviglie nel Container
    QObject::connect(view,SIGNAL(findLavastClick(double,double,double,double,int,QString,int)),model,SLOT(cercaLavastoviglie(double,double,double,double,int,QString,int)));
    // connette il segnale generato dalla pressione del tasto stampa allo slot del modello che emette un segnale con parametro il contenuto del Container

    QObject::connect(view,SIGNAL(printDBClick()),model,SLOT(printDB()));
    //connette il segnale generato dal model quando vuole avvertire l'utente di qualcosa con lo slot della view che genera un messaggio di allerta con il testo passato
    QObject::connect(model,SIGNAL(alertSignal(QString)),view,SLOT(alertOutput(QString)));
    //connette il segnale generato dal model per fornire un output con lo slot della view che genera una form di ooutput con il testo passato
    QObject::connect(model,SIGNAL(outputSignal(QString)),view,SLOT(viewOutput(QString)));

    // connette il segnale generato dalla pressione del tasto modifica (all'interno della form di modifica) quando è selezionato frigorifero allo slot del modello che modifica il frigo nel Container
    QObject::connect(view,SIGNAL(editFrigoClick(double,double,double,double,int,QString,double,double,double,double,double,int,QString,double)),model,SLOT(modificaFrigo(double,double,double,double,int,QString,double,double,double,double,double,int,QString,double)));
    // connette il segnale generato dalla pressione del tasto modifica (all'interno della form di modifica) quando è selezionata lavastoviglie allo slot del modello che modifica la lavast nel Container
    QObject::connect(view,SIGNAL(editLavastClick(double,double,double,double,int,QString,int,double,double,double,double,int,QString,int)),model,SLOT(modificaLavastoviglie(double,double,double,double,int,QString,int,double,double,double,double,int,QString,int)));

    //connette la richiesta della view di stampare tutti i frighi con il suo segnale allo slot del modello che emetterà il segnale con i valori passati a parametro
    QObject::connect(view,SIGNAL(outFrigoClick()),model,SLOT(stampaTuttiIFrigoriferi()));
    //conette il segnale (che vuole stampare i frighi) del modello allo slot che crea un output tabellare nella view
    QObject::connect(model,SIGNAL(outputFrighi(Container<frigorifero>)),view,SLOT(outputFrighi(Container<frigorifero>)));

    //connette la richiesta della view di stampare tutte le lavastoviglie con il suo segnale allo slot del modello che emetterà il segnale con i valori passati a parametro
    QObject::connect(view,SIGNAL(outLavastClick()),model,SLOT(stampaTutteLavastoviglie()));
    //conette il segnale (che vuole stampare le lavastoviglie) del modello allo slot che crea un output tabellare nella view
    QObject::connect(model,SIGNAL(outputLavast(Container<lavastoviglie>)),view,SLOT(outputLavast(Container<lavastoviglie>)));

    //connette il segnale della view che dice che è stato cliccato il tasto apri con lo slot del controller che ripristina un salvataggio
    QObject::connect(view,SIGNAL(openClickSgnl()),SLOT(caricaDB()));
    //connette il segnale della view che dice che è stato cliccato il tasto salva con lo slot del controller che salva lo stato attuale
    QObject::connect(view,SIGNAL(saveClickSgnl()),SLOT(salvaDB()));
}

void dbcontrol::popolaBilanciato(elettrodomestico ** A, int p, int r){
    if(r-p>1){//non ha dimensione 1 minore
        int q = (p+r)/2;
        popolaBilanciato(A, p, q);
        popolaBilanciato(A, q, r);
    }
    if((r-p)==1){
        frigorifero* f=dynamic_cast<frigorifero*>(*(A+p));
        if(f!=0){
            model->inserisciFrigo(f->getPrezzo(),f->getAltezza(),f->getLarghezza(),f->getProfondita(),f->getkWh(), QString::fromStdString(f->getProduttore()),f->getTemperaturaMinima());
        }
        else {
            lavastoviglie* l=dynamic_cast<lavastoviglie*>(*(A+p));
            if(l!=0){
                model->inserisciLavastoviglie(l->getPrezzo(),l->getAltezza(),l->getLarghezza(),l->getProfondita(),l->getkWh(), QString::fromStdString(l->getProduttore()),l->getProgrammi());
            }
        }
    }
}

void dbcontrol::caricaDB(){
    QString fileName = QFileDialog::getOpenFileName(0, "Open File", "", "XML files (*.xml)");
    if(fileName!=""){
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QXmlStreamReader openxml(&file);
        int dim;
        if(openxml.readNextStartElement()){
            QXmlStreamAttributes attribDim= openxml.attributes();
            dim=attribDim.value("size").toString().toInt();
            elettrodomestico* valoriDB[dim];
            int i=0;
            while (!openxml.atEnd()) {
                string prod;
                double alt;
                double larg;
                double prof;
                int cons;
                double prez;

                openxml.readNext();
                if(openxml.tokenType() != QXmlStreamReader::EndElement && openxml.name() == "lavastoviglie"){
                    QXmlStreamAttributes attributes= openxml.attributes();
                    prod=attributes.value("produttore").toString().toStdString();
                    alt=attributes.value("altezza").toString().toDouble();
                    larg=attributes.value("larghezza").toString().toDouble();
                    prof=attributes.value("profondita").toString().toDouble();
                    cons=attributes.value("consumo").toString().toInt();
                    prez=attributes.value("prezzo").toString().toDouble();
                    int prog=attributes.value("programmi").toString().toInt();
                    valoriDB[i]=new lavastoviglie(prez,alt,larg,prof,cons,prod,prog);
                    i++;
                }
                else if(openxml.tokenType() != QXmlStreamReader::EndElement && openxml.name() == "frigorifero"){
                    QXmlStreamAttributes attributes= openxml.attributes();
                    prod=attributes.value("produttore").toString().toStdString();
                    alt=attributes.value("altezza").toString().toDouble();
                    larg=attributes.value("larghezza").toString().toDouble();
                    prof=attributes.value("profondita").toString().toDouble();
                    cons=attributes.value("consumo").toString().toInt();
                    prez=attributes.value("prezzo").toString().toDouble();
                    double temp=attributes.value("temperaturamin").toString().toDouble();
                    valoriDB[i]=new frigorifero(prez,alt,larg,prof,cons,prod,temp);
                    i++;
                }
            }
            if (!openxml.hasError()) {
                model->svuotaDB();
                popolaBilanciato(valoriDB,0,dim);
            }
            else
                view->alertOutput("il file e' corrotto");
        }
        file.close();
        view->alertOutput("DB aperto.");
    }
}

void dbcontrol::salvaDB(){
    QString fileName = QFileDialog::getSaveFileName(0, "Save File", "", "XML files (*.xml)");
    if(fileName!=""){
        Container<SmartElettroPtr>* database=model->getDB();
        Container<SmartElettroPtr>::const_iteratore it=database->begin();
        QFile file(fileName);
        file.open(QIODevice::WriteOnly);
        QXmlStreamWriter writexml(&file);

        writexml.writeStartElement("db");
        writexml.writeAttribute("size",QString::number(model->size()));
        while (it!=database->end()){
            frigorifero* f=dynamic_cast<frigorifero*>(&(**it));

            if(f!=0){

                writexml.writeStartElement("frigorifero");
                writexml.writeAttribute("produttore",QString::fromStdString(f->getProduttore()));                    writexml.writeAttribute("altezza", QString::number(f->getAltezza(),'f',2));
                writexml.writeAttribute("larghezza", QString::number(f->getLarghezza(),'f',2));
                writexml.writeAttribute("profondita", QString::number(f->getProfondita(),'f',2));
                writexml.writeAttribute("consumo", QString::number(f->getkWh()));
                writexml.writeAttribute("prezzo", QString::number(f->getPrezzo(),'f',2));
                writexml.writeAttribute("temperaturamin", QString::number(f->getTemperaturaMinima(),'f',2));
                writexml.writeEndElement();
            }
            else {
                lavastoviglie* l=dynamic_cast<lavastoviglie*>(&(**it));
                if(l!=0){
                    writexml.writeStartElement("lavastoviglie");
                    writexml.writeAttribute("produttore", QString::fromStdString(l->getProduttore()));
                    writexml.writeAttribute("altezza", QString::number(l->getAltezza(),'f',2));
                    writexml.writeAttribute("larghezza", QString::number(l->getLarghezza(),'f',2));
                    writexml.writeAttribute("profondita", QString::number(l->getProfondita(),'f',2));
                    writexml.writeAttribute("consumo", QString::number(l->getkWh()));
                    writexml.writeAttribute("prezzo", QString::number(l->getPrezzo(),'f',2));
                    writexml.writeAttribute("programmi",QString::number(l->getProgrammi()));
                    writexml.writeEndElement();
                }
            }
            ++it;
        }

        writexml.writeEndElement();

        file.close();
        view->alertOutput("DB salvato.");
    }
}
