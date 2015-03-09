/********************************************************************************
** Form generated from reading UI file 'outputform.ui'
**
** Created: Fri 16. May 12:27:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTFORM_H
#define UI_OUTPUTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outputForm
{
public:

    void setupUi(QWidget *outputForm)
    {
        if (outputForm->objectName().isEmpty())
            outputForm->setObjectName(QString::fromUtf8("outputForm"));
        outputForm->resize(400, 300);

        retranslateUi(outputForm);

        QMetaObject::connectSlotsByName(outputForm);
    } // setupUi

    void retranslateUi(QWidget *outputForm)
    {
        outputForm->setWindowTitle(QApplication::translate("outputForm", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class outputForm: public Ui_outputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTFORM_H
