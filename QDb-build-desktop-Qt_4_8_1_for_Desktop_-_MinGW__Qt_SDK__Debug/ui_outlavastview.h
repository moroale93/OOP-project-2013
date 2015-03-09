/********************************************************************************
** Form generated from reading UI file 'outlavastview.ui'
**
** Created: Fri 16. May 12:27:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTLAVASTVIEW_H
#define UI_OUTLAVASTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outLavastView
{
public:

    void setupUi(QWidget *outLavastView)
    {
        if (outLavastView->objectName().isEmpty())
            outLavastView->setObjectName(QString::fromUtf8("outLavastView"));
        outLavastView->resize(400, 300);

        retranslateUi(outLavastView);

        QMetaObject::connectSlotsByName(outLavastView);
    } // setupUi

    void retranslateUi(QWidget *outLavastView)
    {
        outLavastView->setWindowTitle(QApplication::translate("outLavastView", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class outLavastView: public Ui_outLavastView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTLAVASTVIEW_H
