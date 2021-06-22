/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QPushButton *btnAluguel;
    QPushButton *btnAlterar;
    QPushButton *btnRemover;
    QPushButton *btnBuscarPlataforma;
    QPushButton *btnBuscar;
    QPushButton *btnInserir;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(309, 351);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnAluguel = new QPushButton(centralwidget);
        btnAluguel->setObjectName(QString::fromUtf8("btnAluguel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font.setPointSize(12);
        btnAluguel->setFont(font);

        gridLayout->addWidget(btnAluguel, 6, 0, 1, 1);

        btnAlterar = new QPushButton(centralwidget);
        btnAlterar->setObjectName(QString::fromUtf8("btnAlterar"));
        btnAlterar->setFont(font);

        gridLayout->addWidget(btnAlterar, 2, 0, 1, 1);

        btnRemover = new QPushButton(centralwidget);
        btnRemover->setObjectName(QString::fromUtf8("btnRemover"));
        btnRemover->setFont(font);

        gridLayout->addWidget(btnRemover, 3, 0, 1, 1);

        btnBuscarPlataforma = new QPushButton(centralwidget);
        btnBuscarPlataforma->setObjectName(QString::fromUtf8("btnBuscarPlataforma"));
        btnBuscarPlataforma->setFont(font);

        gridLayout->addWidget(btnBuscarPlataforma, 5, 0, 1, 1);

        btnBuscar = new QPushButton(centralwidget);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setFont(font);

        gridLayout->addWidget(btnBuscar, 4, 0, 1, 1);

        btnInserir = new QPushButton(centralwidget);
        btnInserir->setObjectName(QString::fromUtf8("btnInserir"));
        btnInserir->setFont(font);

        gridLayout->addWidget(btnInserir, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 309, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAluguel->setText(QCoreApplication::translate("MainWindow", "Aluguel", nullptr));
        btnAlterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        btnRemover->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        btnBuscarPlataforma->setText(QCoreApplication::translate("MainWindow", "Buscar Plataforma", nullptr));
        btnBuscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnInserir->setText(QCoreApplication::translate("MainWindow", "Inserir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
