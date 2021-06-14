#ifndef _LOCADORA_H_
#define _LOCADORA_H_

#include "IAlugavel.h"
#include "Item.h"
#include "Filme.h"
#include "Jogo.h"
#include <string>

using namespace std;

class Locadora {
    private:
        IAlugavel* v[100];
        int qtd;
        int getIndice(int codigo);
    public:
        Locadora();
        virtual ~Locadora();                    
        void inserir(IAlugavel* i);
        void remover(int codigo);
        void alterar(IAlugavel* i, int codigo);
        void listar();
        void listaritem(string busca);
        void listarplataforma(string busca);
        void mostrarvalor(int codigo);
        bool existe(int codigo);
        void mostrar();
};

#endif