#include "mother.h"
#include "ui_mother.h"

mother::mother(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mother)
{
    ui->setupUi(this);
}

mother::~mother()
{
    delete ui;
}
