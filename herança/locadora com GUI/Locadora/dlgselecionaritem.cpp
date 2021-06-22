#include "dlgselecionaritem.h"
#include "ui_dlgselecionaritem.h"

dlgSelecionarItem::dlgSelecionarItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgSelecionarItem)
{
    ui->setupUi(this);
    connect(ui->btnOk, &QPushButton::clicked, [this](){
        this->ui->rbFilme->isChecked() ? selecionado = 1 : selecionado = 2;
        this->close();
    });
    connect(ui->btnCancelar, &QPushButton::clicked, [this](){
        this->selecionado = -1;
        this->close();
    });

}

dlgSelecionarItem::~dlgSelecionarItem()
{
    delete ui;
}

int dlgSelecionarItem::executar(){
    ui->rbFilme->setChecked(true);
    selecionado = -1;
    exec();
    return selecionado;
}
