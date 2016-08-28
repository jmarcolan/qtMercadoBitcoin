#include "mercadobitcoin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MercadoBitcoin w;
    w.show();

    return a.exec();
}
