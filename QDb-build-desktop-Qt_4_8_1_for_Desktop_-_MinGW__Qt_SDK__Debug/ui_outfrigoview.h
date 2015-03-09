/********************************************************************************
** Form generated from reading UI file 'outfrigoview.ui'
**
** Created: Fri 16. May 12:27:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTFRIGOVIEW_H
#define UI_OUTFRIGOVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outFrigoView
{
public:

    void setupUi(QWidget *outFrigoView)
    {
        if (outFrigoView->objectName().isEmpty())
            outFrigoView->setObjectName(QString::fromUtf8("outFrigoView"));
        outFrigoView->resize(400, 300);

        retranslateUi(outFrigoView);

        QMetaObject::connectSlotsByName(outFrigoView);
    } // setupUi

    void retranslateUi(QWidget *outFrigoView)
    {
        outFrigoView->setWindowTitle(QApplication::translate("outFrigoView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class outFrigoView: public Ui_outFrigoView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTFRIGOVIEW_H
