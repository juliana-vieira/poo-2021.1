/********************************************************************************
** Form generated from reading UI file 'dlgselecionaritem.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSELECIONARITEM_H
#define UI_DLGSELECIONARITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgSelecionarItem
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *rbFilme;
    QSpacerItem *horizontalSpacer;
    QRadioButton *rbJogo;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnOk;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnCancelar;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QDialog *dlgSelecionarItem)
    {
        if (dlgSelecionarItem->objectName().isEmpty())
            dlgSelecionarItem->setObjectName(QString::fromUtf8("dlgSelecionarItem"));
        dlgSelecionarItem->resize(342, 236);
        verticalLayout = new QVBoxLayout(dlgSelecionarItem);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 4, 1, 2);

        label = new QLabel(dlgSelecionarItem);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic Medium"));
        font.setPointSize(16);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 3, 8);

        horizontalSpacer_7 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 8, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 2, 1);

        rbFilme = new QRadioButton(dlgSelecionarItem);
        rbFilme->setObjectName(QString::fromUtf8("rbFilme"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic Medium"));
        font1.setPointSize(14);
        rbFilme->setFont(font1);

        gridLayout->addWidget(rbFilme, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 2, 2, 2);

        rbJogo = new QRadioButton(dlgSelecionarItem);
        rbJogo->setObjectName(QString::fromUtf8("rbJogo"));
        rbJogo->setFont(font1);

        gridLayout->addWidget(rbJogo, 4, 7, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 8, 2, 2);

        verticalSpacer_3 = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 5, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 6, 0, 1, 1);

        btnOk = new QPushButton(dlgSelecionarItem);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        gridLayout->addWidget(btnOk, 6, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 6, 3, 1, 4);

        btnCancelar = new QPushButton(dlgSelecionarItem);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        gridLayout->addWidget(btnCancelar, 6, 7, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 6, 9, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(dlgSelecionarItem);

        QMetaObject::connectSlotsByName(dlgSelecionarItem);
    } // setupUi

    void retranslateUi(QDialog *dlgSelecionarItem)
    {
        dlgSelecionarItem->setWindowTitle(QCoreApplication::translate("dlgSelecionarItem", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dlgSelecionarItem", "Selecione um item:", nullptr));
        rbFilme->setText(QCoreApplication::translate("dlgSelecionarItem", "Filme", nullptr));
        rbJogo->setText(QCoreApplication::translate("dlgSelecionarItem", "Jogo", nullptr));
        btnOk->setText(QCoreApplication::translate("dlgSelecionarItem", "Ok", nullptr));
        btnCancelar->setText(QCoreApplication::translate("dlgSelecionarItem", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgSelecionarItem: public Ui_dlgSelecionarItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSELECIONARITEM_H
