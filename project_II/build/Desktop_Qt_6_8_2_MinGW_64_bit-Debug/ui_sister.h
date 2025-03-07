/********************************************************************************
** Form generated from reading UI file 'sister.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SISTER_H
#define UI_SISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_sister
{
public:

    void setupUi(QDialog *sister)
    {
        if (sister->objectName().isEmpty())
            sister->setObjectName("sister");
        sister->resize(400, 300);

        retranslateUi(sister);

        QMetaObject::connectSlotsByName(sister);
    } // setupUi

    void retranslateUi(QDialog *sister)
    {
        sister->setWindowTitle(QCoreApplication::translate("sister", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sister: public Ui_sister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SISTER_H
