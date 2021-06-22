/********************************************************************************
** Form generated from reading UI file 'dlgjogo.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGJOGO_H
#define UI_DLGJOGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgJogo
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spnJogadores;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *tbxProdutora;
    QPushButton *btnOk;
    QLineEdit *tbxCodigo;
    QComboBox *cbEstilo;
    QLineEdit *tbxTitulo;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *tbxAno;
    QPushButton *btnCancelar;
    QLabel *label_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QComboBox *cbPlataforma;
    QComboBox *cbMidia;
    QLabel *label_5;

    void setupUi(QDialog *dlgJogo)
    {
        if (dlgJogo->objectName().isEmpty())
            dlgJogo->setObjectName(QString::fromUtf8("dlgJogo"));
        dlgJogo->resize(424, 302);
        verticalLayout = new QVBoxLayout(dlgJogo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 9, 1, 1);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 8, 1, 1);

        label_6 = new QLabel(dlgJogo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic Medium"));
        font.setPointSize(16);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 3, 1, 5);

        horizontalSpacer_3 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 9, 1, 1);

        spnJogadores = new QSpinBox(dlgJogo);
        spnJogadores->setObjectName(QString::fromUtf8("spnJogadores"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic Medium"));
        font1.setPointSize(10);
        spnJogadores->setFont(font1);

        gridLayout->addWidget(spnJogadores, 3, 7, 1, 2);

        label_2 = new QLabel(dlgJogo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 4, 1, 2);

        label = new QLabel(dlgJogo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 2, 1, 1);

        tbxProdutora = new QLineEdit(dlgJogo);
        tbxProdutora->setObjectName(QString::fromUtf8("tbxProdutora"));

        gridLayout->addWidget(tbxProdutora, 4, 4, 1, 5);

        btnOk = new QPushButton(dlgJogo);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        gridLayout->addWidget(btnOk, 8, 1, 1, 2);

        tbxCodigo = new QLineEdit(dlgJogo);
        tbxCodigo->setObjectName(QString::fromUtf8("tbxCodigo"));

        gridLayout->addWidget(tbxCodigo, 1, 4, 1, 2);

        cbEstilo = new QComboBox(dlgJogo);
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->addItem(QString());
        cbEstilo->setObjectName(QString::fromUtf8("cbEstilo"));
        cbEstilo->setFont(font1);

        gridLayout->addWidget(cbEstilo, 5, 7, 1, 2);

        tbxTitulo = new QLineEdit(dlgJogo);
        tbxTitulo->setObjectName(QString::fromUtf8("tbxTitulo"));

        gridLayout->addWidget(tbxTitulo, 2, 4, 1, 5);

        label_8 = new QLabel(dlgJogo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 3, 6, 1, 1);

        label_4 = new QLabel(dlgJogo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 1, 1, 3);

        tbxAno = new QLineEdit(dlgJogo);
        tbxAno->setObjectName(QString::fromUtf8("tbxAno"));

        gridLayout->addWidget(tbxAno, 3, 4, 1, 2);

        btnCancelar = new QPushButton(dlgJogo);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        gridLayout->addWidget(btnCancelar, 8, 8, 1, 1);

        label_3 = new QLabel(dlgJogo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 1, 1, 3);

        label_7 = new QLabel(dlgJogo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 6, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        cbPlataforma = new QComboBox(dlgJogo);
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->addItem(QString());
        cbPlataforma->setObjectName(QString::fromUtf8("cbPlataforma"));
        cbPlataforma->setFont(font1);

        gridLayout->addWidget(cbPlataforma, 6, 4, 1, 5);

        cbMidia = new QComboBox(dlgJogo);
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->setObjectName(QString::fromUtf8("cbMidia"));
        cbMidia->setFont(font1);

        gridLayout->addWidget(cbMidia, 5, 4, 1, 2);

        label_5 = new QLabel(dlgJogo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 1, 1, 3);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(dlgJogo);

        QMetaObject::connectSlotsByName(dlgJogo);
    } // setupUi

    void retranslateUi(QDialog *dlgJogo)
    {
        dlgJogo->setWindowTitle(QCoreApplication::translate("dlgJogo", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("dlgJogo", "Estilo:", nullptr));
        label_2->setText(QCoreApplication::translate("dlgJogo", "T\303\255tulo:", nullptr));
        label->setText(QCoreApplication::translate("dlgJogo", "C\303\263digo:", nullptr));
        btnOk->setText(QCoreApplication::translate("dlgJogo", "Ok", nullptr));
        cbEstilo->setItemText(0, QCoreApplication::translate("dlgJogo", "Selecione", nullptr));
        cbEstilo->setItemText(1, QCoreApplication::translate("dlgJogo", "FPS", nullptr));
        cbEstilo->setItemText(2, QCoreApplication::translate("dlgJogo", "RPG", nullptr));
        cbEstilo->setItemText(3, QCoreApplication::translate("dlgJogo", "MOBA", nullptr));
        cbEstilo->setItemText(4, QCoreApplication::translate("dlgJogo", "A\303\247\303\243o", nullptr));
        cbEstilo->setItemText(5, QCoreApplication::translate("dlgJogo", "MMORPG", nullptr));
        cbEstilo->setItemText(6, QCoreApplication::translate("dlgJogo", "RPGmaker", nullptr));
        cbEstilo->setItemText(7, QCoreApplication::translate("dlgJogo", "Indie", nullptr));
        cbEstilo->setItemText(8, QCoreApplication::translate("dlgJogo", "Arcade", nullptr));

        label_8->setText(QCoreApplication::translate("dlgJogo", "N. Jog.:", nullptr));
        label_4->setText(QCoreApplication::translate("dlgJogo", "Prod.:", nullptr));
        btnCancelar->setText(QCoreApplication::translate("dlgJogo", "Cancelar", nullptr));
        label_3->setText(QCoreApplication::translate("dlgJogo", "Ano:", nullptr));
        label_7->setText(QCoreApplication::translate("dlgJogo", "Plataforma:", nullptr));
        cbPlataforma->setItemText(0, QCoreApplication::translate("dlgJogo", "Selecione", nullptr));
        cbPlataforma->setItemText(1, QCoreApplication::translate("dlgJogo", "PC", nullptr));
        cbPlataforma->setItemText(2, QCoreApplication::translate("dlgJogo", "PSP", nullptr));
        cbPlataforma->setItemText(3, QCoreApplication::translate("dlgJogo", "PS1", nullptr));
        cbPlataforma->setItemText(4, QCoreApplication::translate("dlgJogo", "PS2", nullptr));
        cbPlataforma->setItemText(5, QCoreApplication::translate("dlgJogo", "PS3", nullptr));
        cbPlataforma->setItemText(6, QCoreApplication::translate("dlgJogo", "PS4", nullptr));
        cbPlataforma->setItemText(7, QCoreApplication::translate("dlgJogo", "PS5", nullptr));
        cbPlataforma->setItemText(8, QCoreApplication::translate("dlgJogo", "XBOX", nullptr));
        cbPlataforma->setItemText(9, QCoreApplication::translate("dlgJogo", "XBOX One", nullptr));
        cbPlataforma->setItemText(10, QCoreApplication::translate("dlgJogo", "XBOX Series", nullptr));
        cbPlataforma->setItemText(11, QCoreApplication::translate("dlgJogo", "Nintendo Switch", nullptr));
        cbPlataforma->setItemText(12, QCoreApplication::translate("dlgJogo", "Nintendo 64", nullptr));
        cbPlataforma->setItemText(13, QCoreApplication::translate("dlgJogo", "Super Nintendo", nullptr));

        cbMidia->setItemText(0, QCoreApplication::translate("dlgJogo", "Selecione", nullptr));
        cbMidia->setItemText(1, QCoreApplication::translate("dlgJogo", "DVD", nullptr));
        cbMidia->setItemText(2, QCoreApplication::translate("dlgJogo", "Nuvem", nullptr));
        cbMidia->setItemText(3, QCoreApplication::translate("dlgJogo", "Fita", nullptr));
        cbMidia->setItemText(4, QCoreApplication::translate("dlgJogo", "Bluray", nullptr));

        label_5->setText(QCoreApplication::translate("dlgJogo", "M\303\255dia:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgJogo: public Ui_dlgJogo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGJOGO_H
