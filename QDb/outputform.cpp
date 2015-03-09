#include "outputform.h"
#include "ui_outputform.h"

outputForm::outputForm(QDialog *parent) :
    QDialog(parent),outputTE(this),
    ui(new Ui::outputForm)
{
    outputTE.setGeometry(0,0,600,350);
    outputTE.setReadOnly(true);
    ui->setupUi(this);
}

outputForm::~outputForm()
{
    delete ui;
}
