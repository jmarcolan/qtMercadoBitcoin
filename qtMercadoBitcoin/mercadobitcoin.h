#ifndef MERCADOBITCOIN_H
#define MERCADOBITCOIN_H

#include <QMainWindow>
//#include <QtWebKit>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QDebug>
#include "qcustomplot.h"
#include <QByteArray>
#include <QByteRef>


namespace Ui {
class MercadoBitcoin;
}

class MercadoBitcoin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MercadoBitcoin(QWidget *parent = 0);
    ~MercadoBitcoin();

    QNetworkAccessManager *manager;
    QNetworkAccessManager *managerTrade;
    QNetworkAccessManager *managerOrderBook;



private slots:
    void on_pushButton_clicked();



    void on_pbGetTrades_clicked();

    void on_pbGetOrderBook_clicked();

    void on_pbTeste_clicked();

    void on_pbClear_clicked();

private:
    Ui::MercadoBitcoin *ui;

    QString dataTicker;
    QTime tempInicio;
    QDateTime tempInicio1;
    QByteArray textTrade;

    struct dataTrade{
       QVector<double> data;
       QVector<double> preco;
       QVector<double> volume;
       QVector<QString> tipo;
       int quantidade;

    };

    struct dataOHLC{

        QVector<double> key,open, high, low, close;
                        //key é tempo
                        //open é o valor de abertura do candle
                        //high é o valor mais alto
                        //low é o valor mais baixo
                        //close é o valor de fechamneto do candle



    };


    dataOHLC tradeOHLC;
    dataTrade tradeLido;
    //QVector<dataTrade> tradeTotalLido;

    double espaco=0;
    QVector<double> candlePosi;


    void encontraOHLC(double paco);




public slots :
    void doDowload(QNetworkReply *pReply);
    void getTrades(QNetworkReply *rplay);
    void getOrderBook(QNetworkReply *replayOrder);

};

#endif // MERCADOBITCOIN_H
