/********************************************************************************
** Form generated from reading UI file 'mercadobitcoin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCADOBITCOIN_H
#define UI_MERCADOBITCOIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MercadoBitcoin
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MercadoBitcoin)
    {
        if (MercadoBitcoin->objectName().isEmpty())
            MercadoBitcoin->setObjectName(QStringLiteral("MercadoBitcoin"));
        MercadoBitcoin->resize(400, 300);
        centralWidget = new QWidget(MercadoBitcoin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 160, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 47, 13));
        MercadoBitcoin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MercadoBitcoin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MercadoBitcoin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MercadoBitcoin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MercadoBitcoin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MercadoBitcoin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MercadoBitcoin->setStatusBar(statusBar);

        retranslateUi(MercadoBitcoin);

        QMetaObject::connectSlotsByName(MercadoBitcoin);
    } // setupUi

    void retranslateUi(QMainWindow *MercadoBitcoin)
    {
        MercadoBitcoin->setWindowTitle(QApplication::translate("MercadoBitcoin", "MercadoBitcoin", 0));
        pushButton->setText(QApplication::translate("MercadoBitcoin", "PushButton", 0));
        label->setText(QApplication::translate("MercadoBitcoin", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MercadoBitcoin: public Ui_MercadoBitcoin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCADOBITCOIN_H
