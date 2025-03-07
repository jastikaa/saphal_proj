/********************************************************************************
** Form generated from reading UI file 'mother.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTHER_H
#define UI_MOTHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mother
{
public:
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QWidget *page_2;
    QPushButton *pushButton;

    void setupUi(QDialog *mother)
    {
        if (mother->objectName().isEmpty())
            mother->setObjectName("mother");
        mother->resize(400, 300);
        label = new QLabel(mother);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 101, 16));
        stackedWidget = new QStackedWidget(mother);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 70, 391, 221));
        page = new QWidget();
        page->setObjectName("page");
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 70, 49, 16));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 70, 75, 24));
        stackedWidget->addWidget(page_2);

        retranslateUi(mother);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mother);
    } // setupUi

    void retranslateUi(QDialog *mother)
    {
        mother->setWindowTitle(QCoreApplication::translate("mother", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("mother", "mother poems", nullptr));
        label_2->setText(QCoreApplication::translate("mother", "hello", nullptr));
        pushButton->setText(QCoreApplication::translate("mother", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mother: public Ui_mother {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTHER_H
