#ifndef OUTPUTFORM_H
#define OUTPUTFORM_H

#include <QDialog>
#include <QTextEdit>
#include <string>

using namespace std;

namespace Ui {
class outputForm;
}

class outputForm : public QDialog
{
    Q_OBJECT
    
public:
    explicit outputForm(QDialog *parent = 0);
    ~outputForm();
public slots:
    inline void setText(QString in){
        outputTE.setText(in);
    }
private:
    QTextEdit outputTE;
    Ui::outputForm *ui;
};

#endif // OUTPUTFORM_H
