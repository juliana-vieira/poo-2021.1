#ifndef _FILME_H_
#define _FILME_H_

#include "Item.h"
#include <string>

using namespace std;

class Filme : public Item {
    private:
        string atorprincipal, diretor;
    public:
        virtual void ler();
        virtual void mostrar();
        virtual double preco();
        virtual bool buscaString(string busca);

        virtual string getTipo();
        string getDiretor();
};

#endif