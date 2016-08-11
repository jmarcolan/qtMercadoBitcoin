#include "mercadobitcoinapp.h"
#include "ui_mercadobitcoinapp.h"

MercadoBitcoinApp::MercadoBitcoinApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MercadoBitcoinApp)
{
    ui->setupUi(this);
    //oi meu nome é joao
    //jahha
}

MercadoBitcoinApp::~MercadoBitcoinApp()
{
    delete ui;
}
