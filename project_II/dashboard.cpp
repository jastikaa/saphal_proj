#include "dashboard.h"
#include "ui_dashboard.h"
#include "dialog.h"
#include "mother.h"
#include "love.h"
#include "sister.h"

dashboard::dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard)
{
    ui->setupUi(this);
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_pushButton_clicked()
{
    Dialog di;
    di.setModal(true);
    di.exec();
}


void dashboard::on_pushButton_2_clicked()
{
    mother mot;
    mot.setModal(true);
    mot.exec();

}


void dashboard::on_pushButton_3_clicked()
{
    love lo;
    lo.setModal(true);
    lo.exec();


}


void dashboard::on_pushButton_4_clicked()
{
    sister sis;
    sis.setModal(true);
    sis.exec();
}

