#include "Locadora.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Locadora::Locadora(){
    qtd = 0;
}

Locadora::~Locadora(){
    for(int i = 0; i<qtd; i++)
        delete v[i];
}

int Locadora::getIndice(int codigo){
    bool achou = false;
    int i = 0;
    while(!achou && i < qtd){
        if(v[i]->getCodigo() == codigo)
            achou = true;
        else
            i++;
    }
    return achou ? i : -1;
}

bool Locadora::existe(int codigo){
     if (getIndice(codigo) > -1)
        return true;
    else
        return false;
}

void Locadora::inserir(IAlugavel* i){
    v[qtd] = i;
    qtd++;
}

void Locadora::remover(int codigo){
    int pos = getIndice(codigo);
    if (pos > -1){
        delete v[pos];
        for (int i = pos + 1; i < qtd; i++)
            v[i-1] = v[i];
        qtd--;
    }
}

void Locadora::alterar(IAlugavel* i, int codigo){
    int pos = getIndice(codigo);
    delete v[pos];
    v[pos] = i;
}

void Locadora::listar(){
    cout << "CATEGORIA: Filmes" << endl;
    for(int i = 0; i<qtd; i++){
        cout << setprecision(2) << fixed;
        if(v[i]->getTipo() == "Filme"){
            v[i]->mostrar();
            cout << endl;
        }
    }
    cout << "CATEGORIA: Jogos" << endl;
    for(int i = 0; i<qtd; i++){
        if(v[i]->getTipo() == "Jogo"){
            v[i]->mostrar();
            cout << endl;
        }
    }
}

void Locadora::listaritem(string busca){
    for(int i = 0; i<qtd; i++){
        if(v[i]->buscaString(busca) && v[i]->getTipo() == "Filme"){
            cout << "CATEGORIA: Filmes" << endl;
            ((Filme*)v[i])->mostrar();
            cout << endl;
        }else if((v[i]->buscaString(busca) && v[i]->getTipo() == "Jogo")){
            cout << "CATEGORIA: Jogos" << endl;
            ((Jogo*)v[i])->mostrar();
            cout << endl;
        }
    }
}

void Locadora::listarplataforma(string busca){
    for(int i = 0; i<qtd; i++){
        cout << "CATEGORIA: Jogos" << endl;
        ((Jogo*)v[i])->listarPlataforma(busca);
    }
}

void Locadora::mostrarvalor(int codigo){
    int pos = getIndice(codigo);
    if (pos > -1)
        v[pos]->mostrar();
}
