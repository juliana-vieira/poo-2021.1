#ifndef _JOGO_H_
#define _JOGO_H_

#include "item.h"
#include <string>

using namespace std;

class Jogo : public Item {
    private:
        string plataforma;
        int numjogadores;
    public:
        virtual void ler();
        virtual double preco();
        virtual void mostrar();
        virtual bool buscaString(string busca);
        void listarPlataforma (string busca);

        virtual string getTipo();
        string getPlataforma();
};

#endif