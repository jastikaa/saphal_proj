#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->setupUi(this);
    connect( ui->pushButton,SIGNAL(clicked()),
            this, SLOT(on_pushButton_clicked()));

    connect( ui->pushButton_2,SIGNAL(clicked()),
            this, SLOT(on_pushButton_2_clicked()));

    connect( ui->pushButton,SIGNAL(clicked()),
            this, SLOT(on_pushButton_3_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString name[]={"saphal","jas"};
    QString pass[]={"sap","jas"};

    QString Username,Password;
    Username=ui->lineEdit_username->text();
    Password=ui->lineEdit_password->text();

    bool found=false;
    for (int i=0;name->length();i++){
        if(Username==name[i]&& Password==pass[i]){
            this->hide();
            dashboard dash;
            dash.setModal(true);
            dash.exec();
            found=true;
            break;
        }
        else
        if(!found){
            QMessageBox::information(this,"Error Box", "invalid username and password");
        }

    }
}


void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    login log;
    log.setModal(true);
    log.exec();

}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Error", "submitted succesfully");
}

