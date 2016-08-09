#ifndef MERCADOBITCOINAPP_H
#define MERCADOBITCOINAPP_H

#include <QMainWindow>

namespace Ui {
class MercadoBitcoinApp;
}

class MercadoBitcoinApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit MercadoBitcoinApp(QWidget *parent = 0);
    ~MercadoBitcoinApp();

private:
    Ui::MercadoBitcoinApp *ui;
};

#endif // MERCADOBITCOINAPP_H
