/********************************************************************************
** Form generated from reading UI file 'editform.ui'
**
** Created: Fri 16. May 12:27:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITFORM_H
#define UI_EDITFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editForm
{
public:

    void setupUi(QWidget *editForm)
    {
        if (editForm->objectName().isEmpty())
            editForm->setObjectName(QString::fromUtf8("editForm"));
        editForm->resize(400, 300);

        retranslateUi(editForm);

        QMetaObject::connectSlotsByName(editForm);
    } // setupUi

    void retranslateUi(QWidget *editForm)
    {
        editForm->setWindowTitle(QApplication::translate("editForm", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class editForm: public Ui_editForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITFORM_H
