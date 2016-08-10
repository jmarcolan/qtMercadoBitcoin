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
