#ifndef MERCADOBITCOIN_H
#define MERCADOBITCOIN_H

#include <QMainWindow>

namespace Ui {
class MercadoBitcoin;
}

class MercadoBitcoin : public QMainWindow
{
    Q_OBJECT

public:
    explicit MercadoBitcoin(QWidget *parent = 0);
    ~MercadoBitcoin();

private:
    Ui::MercadoBitcoin *ui;
};

#endif // MERCADOBITCOIN_H