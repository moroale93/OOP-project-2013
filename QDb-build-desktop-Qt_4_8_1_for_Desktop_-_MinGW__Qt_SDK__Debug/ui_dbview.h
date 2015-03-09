/********************************************************************************
** Form generated from reading UI file 'dbview.ui'
**
** Created: Fri 16. May 12:27:31 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBVIEW_H
#define UI_DBVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dbView
{
public:

    void setupUi(QWidget *dbView)
    {
        if (dbView->objectName().isEmpty())
            dbView->setObjectName(QString::fromUtf8("dbView"));
        dbView->resize(400, 300);

        retranslateUi(dbView);

        QMetaObject::connectSlotsByName(dbView);
    } // setupUi

    void retranslateUi(QWidget *dbView)
    {
        dbView->setWindowTitle(QApplication::translate("dbView", "dbView", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dbView: public Ui_dbView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBVIEW_H
