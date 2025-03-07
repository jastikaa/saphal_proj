#include "sister.h"
#include "ui_sister.h"

sister::sister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sister)
{
    ui->setupUi(this);
}

sister::~sister()
{
    delete ui;
}
