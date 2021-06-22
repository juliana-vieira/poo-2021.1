/********************************************************************************
** Form generated from reading UI file 'dlgfilme.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGFILME_H
#define UI_DLGFILME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dlgFilme
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *tbxCodigo;
    QLabel *label_2;
    QLineEdit *tbxTitulo;
    QLabel *label_3;
    QLineEdit *tbxAno;
    QLabel *label_4;
    QLineEdit *tbxProdutora;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QLineEdit *tbxDiretor;
    QLabel *label_7;
    QLineEdit *tbxAtorPrincipal;
    QPushButton *btnCancelar;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnOk;
    QLabel *label_8;
    QComboBox *cbMidia;
    QComboBox *cbEstilo;

    void setupUi(QDialog *dlgFilme)
    {
        if (dlgFilme->objectName().isEmpty())
            dlgFilme->setObjectName(QString::fromUtf8("dlgFilme"));
        dlgFilme->resize(424, 302);
        verticalLayout = new QVBoxLayout(dlgFilme);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 3, 1, 1);

        label = new QLabel(dlgFilme);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic Medium"));
        font.setPointSize(16);
        label->setFont(font);

        gridLayout->addWidget(label, 1, 1, 1, 2);

        tbxCodigo = new QLineEdit(dlgFilme);
        tbxCodigo->setObjectName(QString::fromUtf8("tbxCodigo"));

        gridLayout->addWidget(tbxCodigo, 1, 3, 1, 1);

        label_2 = new QLabel(dlgFilme);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 1, 1, 2);

        tbxTitulo = new QLineEdit(dlgFilme);
        tbxTitulo->setObjectName(QString::fromUtf8("tbxTitulo"));

        gridLayout->addWidget(tbxTitulo, 2, 3, 1, 5);

        label_3 = new QLabel(dlgFilme);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 1, 1, 2);

        tbxAno = new QLineEdit(dlgFilme);
        tbxAno->setObjectName(QString::fromUtf8("tbxAno"));

        gridLayout->addWidget(tbxAno, 3, 3, 1, 5);

        label_4 = new QLabel(dlgFilme);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 1, 1, 2);

        tbxProdutora = new QLineEdit(dlgFilme);
        tbxProdutora->setObjectName(QString::fromUtf8("tbxProdutora"));

        gridLayout->addWidget(tbxProdutora, 4, 3, 1, 5);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        label_5 = new QLabel(dlgFilme);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 8, 1, 1);

        label_6 = new QLabel(dlgFilme);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 1, 1, 2);

        tbxDiretor = new QLineEdit(dlgFilme);
        tbxDiretor->setObjectName(QString::fromUtf8("tbxDiretor"));

        gridLayout->addWidget(tbxDiretor, 6, 3, 1, 5);

        label_7 = new QLabel(dlgFilme);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 1, 1, 2);

        tbxAtorPrincipal = new QLineEdit(dlgFilme);
        tbxAtorPrincipal->setObjectName(QString::fromUtf8("tbxAtorPrincipal"));

        gridLayout->addWidget(tbxAtorPrincipal, 7, 3, 1, 5);

        btnCancelar = new QPushButton(dlgFilme);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        gridLayout->addWidget(btnCancelar, 8, 6, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 8, 4, 1, 1);

        btnOk = new QPushButton(dlgFilme);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        gridLayout->addWidget(btnOk, 8, 3, 1, 1);

        label_8 = new QLabel(dlgFilme);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 5, 5, 1, 1);

        cbMidia = new QComboBox(dlgFilme);
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->addItem(QString());
        cbMidia->setObjectName(QString::fromUtf8("cbMidia"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yu Gothic Medium"));
        font1.setPointSize(10);
        cbMidia->setFont(font1);

        gridLayout->addWidget(cbMidia, 5, 3, 1, 2);

        cbEstilo = new QComboBox(dlgFilme);
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

        gridLayout->addWidget(cbEstilo, 5, 6, 1, 2);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(dlgFilme);

        QMetaObject::connectSlotsByName(dlgFilme);
    } // setupUi

    void retranslateUi(QDialog *dlgFilme)
    {
        dlgFilme->setWindowTitle(QCoreApplication::translate("dlgFilme", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dlgFilme", "C\303\263digo:", nullptr));
        label_2->setText(QCoreApplication::translate("dlgFilme", "T\303\255tulo:", nullptr));
        label_3->setText(QCoreApplication::translate("dlgFilme", "Ano:", nullptr));
        label_4->setText(QCoreApplication::translate("dlgFilme", "Prod.:", nullptr));
        label_5->setText(QCoreApplication::translate("dlgFilme", "M\303\255dia:", nullptr));
        label_6->setText(QCoreApplication::translate("dlgFilme", "Diretor:", nullptr));
        label_7->setText(QCoreApplication::translate("dlgFilme", "Ator P.:", nullptr));
        btnCancelar->setText(QCoreApplication::translate("dlgFilme", "Cancelar", nullptr));
        btnOk->setText(QCoreApplication::translate("dlgFilme", "Ok", nullptr));
        label_8->setText(QCoreApplication::translate("dlgFilme", "Estilo:", nullptr));
        cbMidia->setItemText(0, QCoreApplication::translate("dlgFilme", "Selecione", nullptr));
        cbMidia->setItemText(1, QCoreApplication::translate("dlgFilme", "DVD", nullptr));
        cbMidia->setItemText(2, QCoreApplication::translate("dlgFilme", "Blu ray", nullptr));
        cbMidia->setItemText(3, QCoreApplication::translate("dlgFilme", "Nuvem", nullptr));
        cbMidia->setItemText(4, QCoreApplication::translate("dlgFilme", "Fita", nullptr));

        cbEstilo->setItemText(0, QCoreApplication::translate("dlgFilme", "Selecione", nullptr));
        cbEstilo->setItemText(1, QCoreApplication::translate("dlgFilme", "Terror", nullptr));
        cbEstilo->setItemText(2, QCoreApplication::translate("dlgFilme", "Drama", nullptr));
        cbEstilo->setItemText(3, QCoreApplication::translate("dlgFilme", "Romance", nullptr));
        cbEstilo->setItemText(4, QCoreApplication::translate("dlgFilme", "Suspense", nullptr));
        cbEstilo->setItemText(5, QCoreApplication::translate("dlgFilme", "Aventura", nullptr));
        cbEstilo->setItemText(6, QCoreApplication::translate("dlgFilme", "A\303\247\303\243o", nullptr));
        cbEstilo->setItemText(7, QCoreApplication::translate("dlgFilme", "Anima\303\247\303\243o", nullptr));
        cbEstilo->setItemText(8, QCoreApplication::translate("dlgFilme", "Document\303\241rio", nullptr));

    } // retranslateUi

};

namespace Ui {
    class dlgFilme: public Ui_dlgFilme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGFILME_H
