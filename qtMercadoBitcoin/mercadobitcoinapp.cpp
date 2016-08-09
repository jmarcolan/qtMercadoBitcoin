#include "mercadobitcoinapp.h"
#include "ui_mercadobitcoinapp.h"

MercadoBitcoinApp::MercadoBitcoinApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MercadoBitcoinApp)
{
    ui->setupUi(this);
}

MercadoBitcoinApp::~MercadoBitcoinApp()
{
    delete ui;
}
