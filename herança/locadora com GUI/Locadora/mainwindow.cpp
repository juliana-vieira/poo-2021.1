#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Jogo.h"
#include "Filme.h"
#include "item.h"
#include "IAlugavel.h"
#include <iostream>
#include "dlgselecionaritem.h"
#include "dlgfilme.h"
#include "dlgjogo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnInserir, &QPushButton::clicked, this, &MainWindow::Inserir);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Item* criarItem(){
    dlgSelecionarItem dlg;
    int opc = dlg.executar();
    switch (opc){
        case 1: return new Filme();
        case 2: return new Jogo();
        default: return NULL;
    }
}

void MainWindow::Inserir(){
    IAlugavel *item;
    item = criarItem();
    if(item == NULL)
        return;
    if(typeid(*item) == typeid(Filme)){
        dlgFilme dlg;
        if(!dlg.executar(item)){
             delete item;
             return;
        }
    }else{
        dlgJogo dlg;
        if(!dlg.executar(item)){
            delete item;
            return;
        }

    }
    l.inserir(item);
    cout << "Inserido"<< endl;

}

