#include "mercadobitcoin.h"
#include "ui_mercadobitcoin.h"

MercadoBitcoin::MercadoBitcoin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MercadoBitcoin)
{
    ui->setupUi(this);
}

MercadoBitcoin::~MercadoBitcoin()
{
    delete ui;
}

void MercadoBitcoin::on_pushButton_clicked()
{
//hellow github funciona para mim ver

    //helo wordl
}
