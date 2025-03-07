/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *page_2;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(400, 300);
        stackedWidget = new QStackedWidget(dashboard);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 381, 281));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 231, 61));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"Segoe UI\";"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 100, 75, 24));
        pushButton->setStyleSheet(QString::fromUtf8("QpushButton{\n"
"	font: 16pt \"Segoe UI\";\n"
"font-size: 15px;}\n"
"background-color: rgb(255, 0, 0);"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 100, 75, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 170, 75, 24));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(200, 170, 75, 24));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(dashboard);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Dashboard", nullptr));
        pushButton->setText(QCoreApplication::translate("dashboard", "Father", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dashboard", "Mother", nullptr));
        pushButton_3->setText(QCoreApplication::translate("dashboard", "Love", nullptr));
        pushButton_4->setText(QCoreApplication::translate("dashboard", "Sister", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
