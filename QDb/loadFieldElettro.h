#ifndef LOADFIELDELETTRO_H
#define LOADFIELDELETTRO_H
#include <QLabel>
#include <QLineEdit>
#include <QWidget>

class loadFieldElettro:public QWidget{
Q_OBJECT
private:
public:
    QLabel TempLbl;
    QLineEdit TempLE;
    QLabel ProgrammiLbl;
    QLineEdit ProgrammiLE;
    loadFieldElettro(QWidget *parent);
    void setGeometry(int x, int y, int w, int h);
    ~loadFieldElettro();
    inline QString getTemp()const{return TempLE.text();}
    inline QString getProgr()const{return ProgrammiLE.text();}
    inline void eraseField(){
        TempLE.setText("");
        ProgrammiLE.setText("");
    }
public slots:
    void showField(int value);
};

#endif // LOADFIELDELETTRO_H
