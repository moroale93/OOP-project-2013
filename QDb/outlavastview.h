#ifndef OUTLAVASTVIEW_H
#define OUTLAVASTVIEW_H

#include <QDialog>
#include <QTableWidget>
#include <string>
#include <QDebug>
#include "Container.h"
#include "lavastoviglie.h"

using namespace std;

namespace Ui {
class outLavastView;
}

class outLavastView : public QDialog
{
    Q_OBJECT
    
public:
    explicit outLavastView(QDialog *parent = 0);
    ~outLavastView();
    
private:
    Ui::outLavastView *ui;
    QTableWidget table;
public slots:
    void outputLavast(Container<lavastoviglie>);
};

#endif // OUTLAVASTVIEW_H
