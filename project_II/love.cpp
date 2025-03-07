#include "love.h"
#include "ui_love.h"

love::love(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::love)
{
    ui->setupUi(this);
}

love::~love()
{
    delete ui;
}
