#include "outfrigoview.h"
#include "ui_outfrigoview.h"

outFrigoView::outFrigoView(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::outFrigoView),table(this)
{
    ui->setupUi(this);
    table.setGeometry(0,0,820,350);
}

outFrigoView::~outFrigoView()
{
    delete ui;
}

void outFrigoView::outputFrighi(Container<frigorifero> f){
    int r=f.size(),c=8;
    Container<frigorifero>::const_iteratore it=f.begin();
    table.setRowCount(r);
    table.setColumnCount(c);
    QTableWidgetItem* itemProdHeader = new QTableWidgetItem();
    itemProdHeader->setText("Produttore");
    table.setHorizontalHeaderItem(0,itemProdHeader);
    QTableWidgetItem* itemAltHeader = new QTableWidgetItem();
    itemAltHeader->setText("Altezza");
    table.setHorizontalHeaderItem(1,itemAltHeader);
    QTableWidgetItem* itemLargHeader = new QTableWidgetItem();
    itemLargHeader->setText("Larghezza");
    table.setHorizontalHeaderItem(2,itemLargHeader);
    QTableWidgetItem* itemProfHeader = new QTableWidgetItem();
    itemProfHeader->setText("Profondit�");
    table.setHorizontalHeaderItem(3,itemProfHeader);
    QTableWidgetItem* itemkwhHeader = new QTableWidgetItem();
    itemkwhHeader->setText("Consumo [kWh]");
    table.setHorizontalHeaderItem(4,itemkwhHeader);
    QTableWidgetItem* itemTempHeader = new QTableWidgetItem();
    itemTempHeader->setText("Temperatura Min");
    table.setHorizontalHeaderItem(5,itemTempHeader);
    QTableWidgetItem* itemPrezHeader = new QTableWidgetItem();
    itemPrezHeader->setText("Prezzo [euro]");
    table.setHorizontalHeaderItem(6,itemPrezHeader);
    QTableWidgetItem* itemClasseHeader = new QTableWidgetItem();
    itemClasseHeader->setText("Classe energetica");
    table.setHorizontalHeaderItem(7,itemClasseHeader);


    for(int i=0;i<r;i++){
        QTableWidgetItem* itemProd = new QTableWidgetItem();
        itemProd->setText(QString::fromStdString((*it).getProduttore()));
        table.setItem(i,0,itemProd);
        QTableWidgetItem* itemAlt = new QTableWidgetItem();
        itemAlt->setText(QString::number((*it).getAltezza(),'f',2));
        table.setItem(i,1,itemAlt);
        QTableWidgetItem* itemLar = new QTableWidgetItem();
        itemLar->setText(QString::number((*it).getLarghezza(),'f',2));
        table.setItem(i,2,itemLar);
        QTableWidgetItem* itemProf = new QTableWidgetItem();
        itemProf->setText(QString::number((*it).getProfondita(),'f',2));
        table.setItem(i,3,itemProf);
        QTableWidgetItem* itemKWH = new QTableWidgetItem();
        itemKWH->setText(QString::number((*it).getkWh()));
        table.setItem(i,4,itemKWH);
        QTableWidgetItem* itemTemp = new QTableWidgetItem();
        itemTemp->setText(QString::number((*it).getTemperaturaMinima()));
        table.setItem(i,5,itemTemp);
        QTableWidgetItem* itemPrezzo = new QTableWidgetItem();
        itemPrezzo->setText(QString::number((*it).getPrezzo(),'f',2));
        table.setItem(i,6,itemPrezzo);
        QTableWidgetItem* itemClasse = new QTableWidgetItem();
        string classe="";
        classe+=(*it).classeRisparmioEnergetico();
        itemClasse->setText(QString::fromStdString(classe));
        table.setItem(i,7,itemClasse);
        it++;
    }
}
