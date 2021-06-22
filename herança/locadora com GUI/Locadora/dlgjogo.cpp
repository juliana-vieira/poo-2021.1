#include "dlgjogo.h"
#include "ui_dlgjogo.h"
#include "Jogo.h"


dlgJogo::dlgJogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlgJogo)
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

dlgJogo::~dlgJogo()
{
    delete ui;
}

bool dlgJogo::executar(IAlugavel *item){
    ok = false;
    atualizarTela((Jogo*)item);
    exec();
    if(ok)
        atualizarObjeto((Jogo*)item);
    return ok;
}

void dlgJogo::atualizarTela(Jogo *obj){
   ui->tbxCodigo->setText(QString::number(obj->getCodigo()));
   ui->tbxTitulo->setText(QString::fromStdString(obj->getTitulo()));
   ui->tbxAno->setText(QString::number(obj->getLancamento()));
   ui->tbxProdutora->setText(QString::fromStdString(obj->getProdutora()));
   ui->cbMidia->setCurrentText(QString::fromStdString(obj->getMidia()));
   ui->cbEstilo->setCurrentText(QString::fromStdString(obj->getEstilo()));
   ui->spnJogadores->setValue(obj->getNumJog());
   ui->cbPlataforma->setCurrentText(QString::fromStdString(obj->getPlataforma()));
}

void dlgJogo::atualizarObjeto(Jogo *obj){
    obj->setCodigo(ui->tbxCodigo->text().toInt());
    obj->setTitulo(ui->tbxTitulo->text().toStdString());
    obj->setAno(ui->tbxAno->text().toInt());
    obj->setProdutora(ui->tbxProdutora->text().toStdString());
    obj->setMidia(ui->cbMidia->currentText().toStdString());
    obj->setEstilo(ui->cbEstilo->currentText().toStdString());
    obj->setPlataforma(ui->cbPlataforma->currentText().toStdString());
    obj->setNumJog(ui->spnJogadores->value());
}


