#include "dlgfilme.h"
#include "ui_dlgfilme.h"

dlgFilme::dlgFilme(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgFilme)
{
    ui->setupUi(this);
    connect(ui->btnOk, &QPushButton::clicked, [this](){
        this->ok = true;
        this->close();
    });
    connect(ui->btnCancelar, &QPushButton::clicked, [this](){
        this->ok = false;
        this->close();
    });
}

dlgFilme::~dlgFilme()
{
    delete ui;
}

bool dlgFilme::executar(IAlugavel *item){
    ok = false;
    atualizarTela((Filme*)item);
    exec();
    if(ok)
        atualizarObjeto((Filme*)item);
    return ok;
}

void dlgFilme::atualizarTela(Filme *obj){
    ui->tbxCodigo->setText(QString::number(obj->getCodigo()));
    ui->tbxTitulo->setText(QString::fromStdString(obj->getTitulo()));
    ui->tbxAno->setText(QString::number(obj->getLancamento()));
    ui->tbxProdutora->setText(QString::fromStdString(obj->getProdutora()));
    ui->cbMidia->setCurrentText(QString::fromStdString(obj->getMidia()));
    ui->cbEstilo->setCurrentText(QString::fromStdString(obj->getEstilo()));
    ui->tbxDiretor->setText(QString::fromStdString(obj->getDiretor()));
    ui->tbxAtorPrincipal->setText(QString::fromStdString(obj->getAtorPrincipal()));
}

void dlgFilme::atualizarObjeto(Filme *obj){
    obj->setCodigo(ui->tbxCodigo->text().toInt());
    obj->setTitulo(ui->tbxTitulo->text().toStdString());
    obj->setAno(ui->tbxAno->text().toInt());
    obj->setProdutora(ui->tbxProdutora->text().toStdString());
    obj->setMidia(ui->cbMidia->currentText().toStdString());
    obj->setEstilo(ui->cbEstilo->currentText().toStdString());
    obj->setDiretor(ui->tbxDiretor->text().toStdString());
    obj->setAtorPrincipal(ui->tbxAtorPrincipal->text().toStdString());
}
