#ifndef EDITFORM_H
#define EDITFORM_H

#include <QDialog>
#include <QLineEdit>
#include <QTextEdit>
#include <QComboBox>
#include <QPushButton>
#include"loadFieldElettro.h"
#include <QMessageBox>
#include <QGroupBox>
#include "err_sint.h"

namespace Ui {
class editForm;
}

class editForm : public QDialog
{
    Q_OBJECT

private:
    Ui::editForm *ui;

    QComboBox tipoElettrCB;

    QGroupBox daModficareGB;
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

    QGroupBox ModificatoGB;
    QLabel ProduttoreLblM;
    QLineEdit ProduttoreLEM;
    QLabel AltezzaLblM;
    QLineEdit AltezzaLEM;
    QLabel LarghezzaLblM;
    QLineEdit LarghezzaLEM;
    QLabel ProfonditaLblM;
    QLineEdit ProfonditaLEM;
    QLabel ConsumoLblM;
    QLineEdit ConsumoLEM;
    QLabel kwhLblM;
    QLabel PrezzoLblM;
    QLineEdit PrezzoLEM;
    QLabel EuroLblM;
    loadFieldElettro elM;

    QPushButton modBtn;

    void eraseField();
    inline QString getProduttore()const{return ProduttoreLE.text();}
    double getAletezza()const throw(err_sint);
    double getLarghezza()const throw(err_sint);
    double getProfondita()const throw(err_sint);
    double getConsumo()const throw(err_sint);
    double getPrezzo()const throw(err_sint);
    double getTemperatura()const throw(err_sint);
    int getProgrammi()const throw(err_sint);
    inline QString getProduttoreMod()const{return ProduttoreLE.text();}
    double getAletezzaMod()const throw(err_sint);
    double getLarghezzaMod()const throw(err_sint);
    double getProfonditaMod()const throw(err_sint);
    double getConsumoMod()const throw(err_sint);
    double getPrezzoMod()const throw(err_sint);
    double getTemperaturaMod()const throw(err_sint);
    int getProgrammiMod()const throw(err_sint);

public:
    explicit editForm(QDialog *parent = 0);
    ~editForm();
    void print();
private slots:
    void modificaClick();

signals:
    void modificaFrigoClick(double pr, double alt, double lar, double prof, int kw, QString prod,double tempMin,double prm, double altm, double larm, double profm, int kwm, QString prodm,double tempMinm);
    void modificaLavastClick(double pr, double alt, double lar, double prof, int kw, QString prod,int prg,double prm, double altm, double larm, double profm, int kwm, QString prodm,int prgm);

};

#endif // EDITFORM_H
