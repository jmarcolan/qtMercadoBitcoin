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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MercadoBitcoin
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pbGetTrades;
    QDateTimeEdit *dteInicio;
    QPushButton *pbGetOrderBook;
    QPushButton *pbTeste;
    QPushButton *pbClear;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QCustomPlot *widCuston;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *taWiOHLC;
    QMenuBar *menuBar;
    QMenu *menuQt_Mercado_Bitcoin;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MercadoBitcoin)
    {
        if (MercadoBitcoin->objectName().isEmpty())
            MercadoBitcoin->setObjectName(QStringLiteral("MercadoBitcoin"));
        MercadoBitcoin->resize(897, 705);
        centralWidget = new QWidget(MercadoBitcoin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 145));
        widget->setMaximumSize(QSize(16777215, 150));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 50, 75, 23));
        pbGetTrades = new QPushButton(widget);
        pbGetTrades->setObjectName(QStringLiteral("pbGetTrades"));
        pbGetTrades->setGeometry(QRect(10, 50, 75, 23));
        dteInicio = new QDateTimeEdit(widget);
        dteInicio->setObjectName(QStringLiteral("dteInicio"));
        dteInicio->setGeometry(QRect(10, 10, 194, 22));
        pbGetOrderBook = new QPushButton(widget);
        pbGetOrderBook->setObjectName(QStringLiteral("pbGetOrderBook"));
        pbGetOrderBook->setGeometry(QRect(120, 50, 101, 23));
        pbTeste = new QPushButton(widget);
        pbTeste->setObjectName(QStringLiteral("pbTeste"));
        pbTeste->setGeometry(QRect(500, 60, 75, 23));
        pbClear = new QPushButton(widget);
        pbClear->setObjectName(QStringLiteral("pbClear"));
        pbClear->setGeometry(QRect(590, 60, 75, 23));

        verticalLayout_4->addWidget(widget);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 853, 437));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widCuston = new QCustomPlot(scrollAreaWidgetContents_2);
        widCuston->setObjectName(QStringLiteral("widCuston"));

        verticalLayout->addWidget(widCuston);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 851, 421));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 849, 419));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        taWiOHLC = new QTableWidget(scrollAreaWidgetContents);
        taWiOHLC->setObjectName(QStringLiteral("taWiOHLC"));

        verticalLayout_2->addWidget(taWiOHLC);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        MercadoBitcoin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MercadoBitcoin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 897, 21));
        menuQt_Mercado_Bitcoin = new QMenu(menuBar);
        menuQt_Mercado_Bitcoin->setObjectName(QStringLiteral("menuQt_Mercado_Bitcoin"));
        MercadoBitcoin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MercadoBitcoin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MercadoBitcoin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MercadoBitcoin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MercadoBitcoin->setStatusBar(statusBar);

        menuBar->addAction(menuQt_Mercado_Bitcoin->menuAction());

        retranslateUi(MercadoBitcoin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MercadoBitcoin);
    } // setupUi

    void retranslateUi(QMainWindow *MercadoBitcoin)
    {
        MercadoBitcoin->setWindowTitle(QApplication::translate("MercadoBitcoin", "MercadoBitcoin", 0));
        pushButton->setText(QApplication::translate("MercadoBitcoin", "Get Ticker", 0));
        pbGetTrades->setText(QApplication::translate("MercadoBitcoin", "Get Trades", 0));
        pbGetOrderBook->setText(QApplication::translate("MercadoBitcoin", "Get Order Book", 0));
        pbTeste->setText(QApplication::translate("MercadoBitcoin", "print", 0));
        pbClear->setText(QApplication::translate("MercadoBitcoin", "clear", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MercadoBitcoin", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MercadoBitcoin", "Tab 2", 0));
        menuQt_Mercado_Bitcoin->setTitle(QApplication::translate("MercadoBitcoin", "Qt Mercado Bitcoin", 0));
    } // retranslateUi

};

namespace Ui {
    class MercadoBitcoin: public Ui_MercadoBitcoin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCADOBITCOIN_H
