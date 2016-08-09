/********************************************************************************
** Form generated from reading UI file 'mercadobitcoinapp.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCADOBITCOINAPP_H
#define UI_MERCADOBITCOINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MercadoBitcoinApp
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MercadoBitcoinApp)
    {
        if (MercadoBitcoinApp->objectName().isEmpty())
            MercadoBitcoinApp->setObjectName(QStringLiteral("MercadoBitcoinApp"));
        MercadoBitcoinApp->resize(400, 300);
        menuBar = new QMenuBar(MercadoBitcoinApp);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MercadoBitcoinApp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MercadoBitcoinApp);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MercadoBitcoinApp->addToolBar(mainToolBar);
        centralWidget = new QWidget(MercadoBitcoinApp);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MercadoBitcoinApp->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MercadoBitcoinApp);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MercadoBitcoinApp->setStatusBar(statusBar);

        retranslateUi(MercadoBitcoinApp);

        QMetaObject::connectSlotsByName(MercadoBitcoinApp);
    } // setupUi

    void retranslateUi(QMainWindow *MercadoBitcoinApp)
    {
        MercadoBitcoinApp->setWindowTitle(QApplication::translate("MercadoBitcoinApp", "MercadoBitcoinApp", 0));
    } // retranslateUi

};

namespace Ui {
    class MercadoBitcoinApp: public Ui_MercadoBitcoinApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCADOBITCOINAPP_H
