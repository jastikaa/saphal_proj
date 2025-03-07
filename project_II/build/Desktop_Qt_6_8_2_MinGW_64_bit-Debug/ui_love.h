/********************************************************************************
** Form generated from reading UI file 'love.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOVE_H
#define UI_LOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_love
{
public:
    QLabel *label;

    void setupUi(QDialog *love)
    {
        if (love->objectName().isEmpty())
            love->setObjectName("love");
        love->resize(400, 300);
        label = new QLabel(love);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 40, 49, 16));

        retranslateUi(love);

        QMetaObject::connectSlotsByName(love);
    } // setupUi

    void retranslateUi(QDialog *love)
    {
        love->setWindowTitle(QCoreApplication::translate("love", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("love", "love", nullptr));
    } // retranslateUi

};

namespace Ui {
    class love: public Ui_love {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOVE_H
