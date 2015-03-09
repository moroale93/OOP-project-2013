#ifndef OUTFRIGOVIEW_H
#define OUTFRIGOVIEW_H

#include <QDialog>
#include <QTableWidget>
#include <string>
#include <QDebug>
#include "Container.h"
#include "frigorifero.h"

using namespace std;

namespace Ui {
class outFrigoView;
}

class outFrigoView : public QDialog
{
    Q_OBJECT
    
public:
    explicit outFrigoView(QDialog *parent = 0);
    ~outFrigoView();
    
private:
    Ui::outFrigoView *ui;
    QTableWidget table;
public slots:
    void outputFrighi(Container<frigorifero>);
};

#endif // OUTFRIGOVIEW_H
