#include "mercadobitcoin.h"
#include "ui_mercadobitcoin.h"


MercadoBitcoin::MercadoBitcoin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MercadoBitcoin)
{
    ui->setupUi(this);


    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(doDowload(QNetworkReply*)));


    managerTrade = new QNetworkAccessManager(this);
    connect(managerTrade, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(getTrades(QNetworkReply*)));



    managerOrderBook = new QNetworkAccessManager(this);
    connect(managerOrderBook, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(getOrderBook(QNetworkReply*)));

    //pega o tempo atual
ui->dteInicio->setDateTime( QDateTime::currentDateTime());


}

MercadoBitcoin::~MercadoBitcoin()
{
    delete ui;
}

void MercadoBitcoin::on_pushButton_clicked()
{

 manager->get(QNetworkRequest(QUrl("https://www.mercadobitcoin.net/api/ticker/")));

}

void MercadoBitcoin::doDowload(QNetworkReply *pReply)
{

    bool teste1;
    teste1 =true;

    QByteArray data=pReply->readAll();
    QString str(data);

    qDebug() << str;

    QString lol;

    lol= "100.30";

    double te=19;

    te= lol.toDouble();

    te=te+1;


}

void MercadoBitcoin::getTrades(QNetworkReply *rplay)
{
    QByteArray data=rplay->readAll();
    QString str(data);
    QByteArray valorData, valorPrice;
  //  QByteRef valor1;

    qDebug() << str;

    //encontra os dados que foram lidos

    bool chLeitura=true;
    unsigned int contador=0;

    //para multiplas vezes que apertar o botão
    tradeLido.data.clear();
    tradeLido.preco.clear();
    tradeLido.volume.clear();
    tradeLido.tipo.clear();



    while(chLeitura){


        if(data[contador]==93){ //93 é igual a ]
         chLeitura=false;

        }



        if((data[contador] == 100)&&(data[contador+1] ==97 )) //100 é igual a d
                    //leitura da data
        {
           // valorData.insert(0,data.mid(contador+6,10));
           tradeLido.data.push_back(data.mid(contador+6,10).toDouble());
           // qDebug() << valorData;
        }

        if((data[contador] == 112)&&(data[contador+1] ==114 )) //100 é igual a d
                    //leitura price
        {
            //valorPrice.insert(0,data.mid(contador+7,13));
            tradeLido.preco.push_back(data.mid(contador+7,13).toDouble());

           // qDebug() << valorPrice;
        }


        if((data[contador] == 97)&&(data[contador+1] == 109 )) //100 é igual a d
                    //leitura amount
        {
           // valorPrice.insert(0,data.mid(contador+8,10));
            //qDebug() << valorPrice;
            tradeLido.volume.push_back(data.mid(contador+8,10).toDouble());

        }
        if((data[contador] == 116)&&(data[contador+1] == 121 )) //100 é igual a d
                    //leitura tipo
        {
           // valorPrice.insert(0,data.mid(contador+6,3));
           // qDebug() << valorPrice;
            tradeLido.tipo.push_back(QString::fromLatin1(data.mid(contador+7,3)));
            //tradeLido.volume.push_back(data.mid(contador+8,10));

        }




        contador++;
    }//fim leitura

    encontraOHLC(3600); //paco de uma hora


//    for(int conA=1; conA < tradeLido.data.size(); conA++){

//        espaco=tradeLido.data[conA]-tradeLido.data[conA-1]+ espaco;

//    }
//    espaco = espaco/tradeLido.data.size();




}

void MercadoBitcoin::getOrderBook(QNetworkReply *replayOrder)
{
    QByteArray data=replayOrder->readAll();
    QString str(data);

    qDebug() << str;
}

void MercadoBitcoin::on_pbGetTrades_clicked()
{



   tempInicio1= ui->dteInicio->dateTime();
   //tempInicio1= QDateTime::currentDateTime();

   //time_t a;
  // a= QDateTime::toTime_t(tempInicio);


  unsigned int temIn= tempInicio1.toTime_t();

  QString temInTesto;

  temInTesto= QString::number(temIn);


  qDebug()<<temInTesto;

  managerTrade->get(
              QNetworkRequest(
                  QUrl("https://www.mercadobitcoin.net/api/trades/"+
                      temInTesto+"/")));


  //get trade
  bool as;
  as=true;



}

void MercadoBitcoin::on_pbGetOrderBook_clicked()
{
    managerOrderBook->get(
                QNetworkRequest(
                    QUrl("https://www.mercadobitcoin.net/api/orderbook/")));


}

void MercadoBitcoin::on_pbTeste_clicked()
{



//    //Qui->widCuston* ui->widCuston;
//    //ui->widCuston = new Qui->widCuston();

//    // generate some data:
//    QVector<double> x(101), y(101); // initialize with entries 0..100
//    for (int i=0; i<101; ++i)
//    {
//      x[i] = i/50.0 - 1; // x goes from -1 to 1
//      y[i] = x[i]*x[i]; // let's plot a quadratic function
//    }
//    // create graph and assign data to it:

//    ui->widCuston->addGraph();
//    ui->widCuston->graph(0)->setData(x, y);
//    // give the axes some labels:
//    ui->widCuston->xAxis->setLabel("x");
//    ui->widCuston->yAxis->setLabel("y");
//    // set axes ranges, so we see all data:
//    ui->widCuston->xAxis->setRange(-1, 1);
//    ui->widCuston->yAxis->setRange(0, 1);
//    ui->widCuston->replot();


  //  ui->widCuston->legend->setVisible(true);

    // generate two sets of random walk data (one for candlestick and one for ohlc chart):
    //int n = 1000;
    int n= tradeLido.preco.size();
    QVector<double> time(n), value1(n), value2(n);
    //QDateTime start = ui->dteInicio->dateTime(); //QDateTime(QDate(2014, 6, 11));
    //start.setTimeSpec(Qt::UTC);
    //(double) tradeLido.data[0];//
    double startTime = tradeLido.data[0]; // start.toTime_t();
    double binSize =1000; //valor de espaco dos candle
                           //[e em segundo //espaco; //3600* 24;//24; // bin data in 1 day intervals
    time[0] = (double) tradeLido.data[0];//startTime;
    value1[0] = (double) tradeLido.preco[0];
    //value2[0] = 20;
   // qsrand(9);




    for (int i=1; i<n; ++i)
    {
      time[i] = (double) tradeLido.data[i]; //startTime + 3600*i;
      value1[i] = tradeLido.preco[i]; //value1[i-1] + (qrand()/(double)RAND_MAX-0.5)*10;
      //value2[i] = //value2[i-1] + (qrand()/(double)RAND_MAX-0.5)*3;
    }

    // create candlestick chart:
    QCPFinancial *candlesticks = new QCPFinancial(ui->widCuston->xAxis, ui->widCuston->yAxis);
    ui->widCuston->addPlottable(candlesticks);
   // QCPFinancialDataMap data1 = QCPFinancial::timeSeriesToOhlc(time, value1, binSize, startTime);
    //QCPFinancialDataMap data1 = QCPFinancial::timeSeriesToOhlc(tradeLido.data, tradeLido.preco, binSize, tradeLido.data[0]);

    candlesticks->setName("Candlestick");
    candlesticks->setChartStyle(QCPFinancial::csCandlestick);
    //candlesticks->setData(&data1, true);
    QVector<double> key,open, high, low, close;
    key.push_back(100);
    key.push_back(3600);
    key.push_back(7200);

    open.push_back(10);
    open.push_back(12);
    open.push_back(15);
    high.push_back(30);
    high.push_back(50);
    high.push_back(30);
    low.push_back(5);
    low.push_back(10);
    low.push_back(10);
    close.push_back(12);
    close.push_back(15);
    close.push_back(25);

    //candlesticks->setData(key,open,high,low,close);

    candlesticks->setData(tradeOHLC.key, tradeOHLC.open, tradeOHLC.high,tradeOHLC.low, tradeOHLC.close);
    candlesticks->setWidth(binSize*0.9);
    candlesticks->setTwoColored(true);
    candlesticks->setBrushPositive(QColor(245, 245, 245));
    candlesticks->setBrushNegative(QColor(0, 0, 0));
    candlesticks->setPenPositive(QPen(QColor(0, 0, 0)));
    candlesticks->setPenNegative(QPen(QColor(0, 0, 0)));

//    // create ohlc chart:
//    QCPFinancial *ohlc = new QCPFinancial(ui->widCuston->xAxis, ui->widCuston->yAxis);
//    ui->widCuston->addPlottable(ohlc);
//    QCPFinancialDataMap data2 = QCPFinancial::timeSeriesToOhlc(time, value2, binSize/3.0, startTime); // divide binSize by 3 just to make the ohlc bars a bit denser
//    ohlc->setName("OHLC");
//    ohlc->setChartStyle(QCPFinancial::csOhlc);
//    ohlc->setData(&data2, true);
//    ohlc->setWidth(binSize*0.2);
//    ohlc->setTwoColored(true);

//    // create bottom axis rect for volume bar chart:
//    QCPAxisRect *volumeAxisRect = new QCPAxisRect(ui->widCuston);
//    ui->widCuston->plotLayout()->addElement(1, 0, volumeAxisRect);
//    volumeAxisRect->setMaximumSize(QSize(QWIDGETSIZE_MAX, 100));
//    volumeAxisRect->axis(QCPAxis::atBottom)->setLayer("axes");
//    volumeAxisRect->axis(QCPAxis::atBottom)->grid()->setLayer("grid");
//    // bring bottom and main axis rect closer together:
//    ui->widCuston->plotLayout()->setRowSpacing(0);
//    volumeAxisRect->setAutoMargins(QCP::msLeft|QCP::msRight|QCP::msBottom);
//    volumeAxisRect->setMargins(QMargins(0, 0, 0, 0));
//    // create two bar plottables, for positive (green) and negative (red) volume bars:
//    QCPBars *volumePos = new QCPBars(volumeAxisRect->axis(QCPAxis::atBottom), volumeAxisRect->axis(QCPAxis::atLeft));
//    QCPBars *volumeNeg = new QCPBars(volumeAxisRect->axis(QCPAxis::atBottom), volumeAxisRect->axis(QCPAxis::atLeft));
//    for (int i=0; i<n/5; ++i)
//    {
//      int v = qrand()%20000+qrand()%20000+qrand()%20000-10000*3;
//      (v < 0 ? volumeNeg : volumePos)->addData(startTime+3600*5.0*i, qAbs(v)); // add data to either volumeNeg or volumePos, depending on sign of v
//    }
//    ui->widCuston->setAutoAddPlottableToLegend(false);
//    ui->widCuston->addPlottable(volumePos);
//    ui->widCuston->addPlottable(volumeNeg);
//    volumePos->setWidth(3600*4);
//    volumePos->setPen(Qt::NoPen);
//    volumePos->setBrush(QColor(100, 180, 110));
//    volumeNeg->setWidth(3600*4);
//    volumeNeg->setPen(Qt::NoPen);
//    volumeNeg->setBrush(QColor(180, 90, 90));

//    // interconnect x axis ranges of main and bottom axis rects:
//    connect(ui->widCuston->xAxis, SIGNAL(rangeChanged(QCPRange)), volumeAxisRect->axis(QCPAxis::atBottom), SLOT(setRange(QCPRange)));
//    connect(volumeAxisRect->axis(QCPAxis::atBottom), SIGNAL(rangeChanged(QCPRange)), ui->widCuston->xAxis, SLOT(setRange(QCPRange)));
//    // configure axes of both main and bottom axis rect:
//    volumeAxisRect->axis(QCPAxis::atBottom)->setAutoTickStep(false);
//    volumeAxisRect->axis(QCPAxis::atBottom)->setTickStep(3600*24*4); // 4 day tickstep
//    volumeAxisRect->axis(QCPAxis::atBottom)->setTickLabelType(QCPAxis::ltDateTime);
//    volumeAxisRect->axis(QCPAxis::atBottom)->setDateTimeSpec(Qt::UTC);
//    volumeAxisRect->axis(QCPAxis::atBottom)->setDateTimeFormat("dd. MMM");
//    volumeAxisRect->axis(QCPAxis::atBottom)->setTickLabelRotation(15);
//    volumeAxisRect->axis(QCPAxis::atLeft)->setAutoTickCount(3);
//    ui->widCuston->xAxis->setBasePen(Qt::NoPen);


    ui->widCuston->xAxis->setTickLabels(false);
    ui->widCuston->xAxis->setTicks(false); // only want vertical grid in main axis rect, so hide xAxis backbone, ticks, and labels
    ui->widCuston->xAxis->setAutoTickStep(false);
    ui->widCuston->xAxis->setTickStep(3600*24);//24*4); // 4 day tickstep
    ui->widCuston->rescaleAxes();
    ui->widCuston->xAxis->scaleRange(1.025, ui->widCuston->xAxis->range().center());
    ui->widCuston->yAxis->scaleRange(1.1, ui->widCuston->yAxis->range().center());

    // make axis rects' left side line up:
    QCPMarginGroup *group = new QCPMarginGroup(ui->widCuston);
    ui->widCuston->axisRect()->setMarginGroup(QCP::msLeft|QCP::msRight, group);
  //  volumeAxisRect->setMarginGroup(QCP::msLeft|QCP::msRight, group);

    ui->widCuston->replot();

    QStringList titulos;
    titulos << "id" << "tempo" << "open" << "alto" << "low" << "close";
    ui->taWiOHLC->setColumnCount(6);
    ui->taWiOHLC->setHorizontalHeaderLabels(titulos);

    for(int conk=0; conk<tradeOHLC.key.size();conk++){

        ui->taWiOHLC->insertRow(ui->taWiOHLC->rowCount());

        ui->taWiOHLC->setItem(ui->taWiOHLC->rowCount()-1,0,new QTableWidgetItem(
                                  QString::number(conk)));
        ui->taWiOHLC->setItem(ui->taWiOHLC->rowCount()-1,1,new QTableWidgetItem(
                                  QString::number(tradeOHLC.key[conk])));
        ui->taWiOHLC->setItem(ui->taWiOHLC->rowCount()-1,2,new QTableWidgetItem(
                                  QString::number(tradeOHLC.open[conk])));
        ui->taWiOHLC->setItem(ui->taWiOHLC->rowCount()-1,3,new QTableWidgetItem(
                                  QString::number(tradeOHLC.high[conk])));
        ui->taWiOHLC->setItem(ui->taWiOHLC->rowCount()-1,4,new QTableWidgetItem(
                                  QString::number(tradeOHLC.low[conk])));
        ui->taWiOHLC->setItem(ui->taWiOHLC->rowCount()-1,5,new QTableWidgetItem(
                                  QString::number(tradeOHLC.close[conk])));



    }


}

void MercadoBitcoin::on_pbClear_clicked()
{
    ui->widCuston->removePlottable(0);
    ui->widCuston->replot();

    ui->taWiOHLC->clear();

    for(int contk=0; contk < ui->taWiOHLC->rowCount(); contk++){

        ui->taWiOHLC->removeRow(contk);
    }

}

void MercadoBitcoin::encontraOHLC(double paco)
{
    int tamanhoVetor=tradeLido.data.size();
    double dataInicial=tradeLido.data[0];
    double dataFinal= tradeLido.data[tamanhoVetor-1];
    double qntCandles=0;
    int contCandles=0;


    QVector<int> candleNumero;
    qntCandles= (dataFinal- dataInicial)/paco;
    QVector<bool> chLeitura;



    candlePosi.clear();
    tradeOHLC.key.clear();
    tradeOHLC.open.clear();
    tradeOHLC.high.clear();
    tradeOHLC.low.clear();
    tradeOHLC.close.clear();


    for(int k=0; k<tradeLido.data.size(); k++){
        chLeitura.push_back(true);
    }



    //encontrando os candle da cada hora

    for(contCandles=0;contCandles <= (qntCandles+1); contCandles++){

        for(int conL=0; conL < tradeLido.data.size(); conL++)
        {

            if(((tradeLido.data[0]+(paco*contCandles))>= tradeLido.data[conL])&&(chLeitura[conL])){

                    candlePosi.push_back(contCandles);
                    chLeitura[conL]=false;

            }
        }
    }

    tradeOHLC.key.push_back(tradeLido.data[0]);
    tradeOHLC.open.push_back(tradeLido.preco[0]);
    tradeOHLC.high.push_back(tradeLido.preco[0]);
    tradeOHLC.low.push_back(tradeLido.preco[0]);
    tradeOHLC.close.push_back(tradeLido.preco[0]);

    bool chPrimeiro=true;
    bool chNCandle=true;
    double maior=0;
    int multiplicador=1;

    int posiMaior=0;
    double menor=100000;
    int conL1=0;
    int posiMenor=0;
    int ultCandleLido=0;

    for(contCandles=1;contCandles <= (qntCandles+1); contCandles++){

        for(conL1=0; conL1 < tradeLido.data.size(); conL1++)
        {

            if(candlePosi[conL1]==contCandles){

                chNCandle=false;
                if(chPrimeiro){
                tradeOHLC.open.push_back(tradeLido.preco[conL1-1]);
                chPrimeiro=false;
                ultCandleLido=contCandles;
                }

                if(tradeLido.preco[conL1]>maior){
                    maior= tradeLido.preco[conL1];
                    posiMaior=conL1;
                }

                if(tradeLido.preco[conL1]<menor){
                    menor= tradeLido.preco[conL1];
                    posiMenor=conL1;
                }

                if((conL1+1)<tradeLido.data.size()){

                    if(candlePosi[conL1+1]>=(contCandles+1)){ //2 2

                        tradeOHLC.key.push_back(tradeLido.data[conL1]);
                        tradeOHLC.high.push_back(tradeLido.preco[posiMaior]);
                        maior=0;
                        tradeOHLC.low.push_back(tradeLido.preco[posiMenor]);
                        menor=100000;
                        tradeOHLC.close.push_back(tradeLido.preco[conL1]);
                        chPrimeiro=true;
                    }

                }else{

                    tradeOHLC.key.push_back(tradeLido.data[conL1]);
                    tradeOHLC.high.push_back(tradeLido.preco[posiMaior]);
                    maior=0;
                    tradeOHLC.low.push_back(tradeLido.preco[posiMenor]);
                    menor=100000;
                    tradeOHLC.close.push_back(tradeLido.preco[conL1]);
                    chPrimeiro=true;


                }



            }


        }//fim conL


        if(chNCandle){
        //funcao para funcionar quando nao tem candle no horario

            tradeOHLC.key.push_back(tradeLido.data[ultCandleLido]+(3600*multiplicador));
            tradeOHLC.open.push_back(tradeLido.preco[ultCandleLido]);
            tradeOHLC.high.push_back(tradeLido.preco[ultCandleLido]);
            tradeOHLC.low.push_back(tradeLido.preco[ultCandleLido]);
            tradeOHLC.close.push_back(tradeLido.preco[ultCandleLido]);

            multiplicador++;


        }else{

            multiplicador=1;

            chPrimeiro=true;
            chNCandle=true;

        }


    }//fim contCandle


}



