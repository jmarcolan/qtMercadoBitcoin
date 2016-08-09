#include "mercadobitcoinapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MercadoBitcoinApp w;
    w.show();

    return a.exec();
}
