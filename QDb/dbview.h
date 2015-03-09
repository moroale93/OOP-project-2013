#ifndef DBVIEW_H
#define DBVIEW_H

#include <QDialog>
#include <QObject>
#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>
#include"loadFieldElettro.h"
#include <QMessageBox>
#include "outputform.h"
#include "editform.h"
#include <QGroupBox>
#include <string>
#include "outfrigoview.h"
#include "outlavastview.h"
#include "Container.h"
#include "frigorifero.h"
#include "lavastoviglie.h"
#include "err_sint.h"

using namespace std;

namespace Ui {
class dbView;
}

class dbView : public QDialog
{
    Q_OBJECT
private:
    Ui::dbView *ui;

    QGroupBox idfGB;//insert delete find groupbox
    QGroupBox otherActionGB;//insert delete find groupbox

    QComboBox tipoElettrCB;
    QLabel ProduttoreLbl;
    QLineEdit ProduttoreLE;
    QLabel AltezzaLbl;
    QLineEdit AltezzaLE;
    QLabel LarghezzaLbl;
    QLineEdit LarghezzaLE;
    QLabel ProfonditaLbl;
    QLineEdit ProfonditaLE;
    QLabel ConsumoLbl;
    QLineEdit ConsumoLE;
    QLabel kwhLbl;
    QLabel PrezzoLbl;
    QLineEdit PrezzoLE;
    QLabel EuroLbl;
    loadFieldElettro el;
    QPushButton inserimentoPBtn;
    QPushButton cancellazionePBtn;
    QPushButton ricercaPBtn;
    QPushButton modificaPBtn;
    QPushButton printPBtn;
    outputForm outView;
    editForm editView;
    outFrigoView outfrigo;
    outLavastView outlavast;
    QPushButton frighiBtn;
    QPushButton lavastBtn;
    QPushButton apriBtn;
    QPushButton saveBtn;

public:
    explicit dbView(QDialog *parent = 0);
    ~dbView();
    inline QString getProduttore()const{return ProduttoreLE.text();}
    double getAletezza()const throw(err_sint);
    double getLarghezza()const throw(err_sint);
    double getProfondita()const throw(err_sint);
    double getConsumo()const throw(err_sint);
    double getPrezzo()const throw(err_sint);
    double getTemperatura()const throw(err_sint);
    int getProgrammi()const throw(err_sint);

signals:
    void insertFrigoClick(double,double,double,double,int,QString,double);
    void insertLavastClick(double,double,double,double,int,QString,int);
    void deleteFrigoClick(double,double,double,double,int,QString,double);
    void deleteLavastClick(double,double,double,double,int,QString,int);
    void findFrigoClick(double,double,double,double,int,QString,double);
    void findLavastClick(double,double,double,double,int,QString,int);
    void editFrigoClick(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin,double prm, double altm, double larm, double profm, int kwm, QString prodm,double tempMinm);
    void editLavastClick(double pr, double alt, double lar, double prof, int kw, QString prod,int prg,double prm, double altm, double larm, double profm, int kwm, QString prodm,int prgm);
    void printDBClick();
    void outViewRequest(QString);//emana il segnale di richiesta di stampa su form di output
    void outFrigoClick();
    void outputFrighiSgnl(Container<frigorifero>);
    void outLavastClick();
    void outputLavastSgnl(Container<lavastoviglie>);
    void openClickSgnl();
    void saveClickSgnl();
public slots:
    void alertOutput(QString);
    void viewOutput(QString);
    void outputFrighi(Container<frigorifero>);
    void outputLavast(Container<lavastoviglie>);
private slots:
    void insertClick();//slot per emettere il segnale che è stato cliccato il bottone di inserimento
    void deleteClick();//slot per emettere il segnale che è stato cliccato il bottone di cancellazione
    void findClick();//slot per emettere il segnale che è stato cliccato il bottone di ricerca
    void editClick();//slot per emettere il segnale che è stato cliccato il bottone di modifica
    void FrigoClick(double,double,double,double,int,QString,double,double,double,double,double,int,QString,double);
    void LavastClick(double,double,double,double,int,QString,int,double,double,double,double,int,QString,int);
    void printClick();//slot per emettere il segnale che è stato cliccato il bottone stampa
    void eraseField();
    void outFrigoClickSlot();
    void outLavastClickSlot();
    void openClick();
    void saveClick();
};

#endif // DBVIEW_H
