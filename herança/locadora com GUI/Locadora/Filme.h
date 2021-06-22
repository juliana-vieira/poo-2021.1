#ifndef _FILME_H_
#define _FILME_H_

#include "item.h"
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
        string getAtorPrincipal();

        void setDiretor(string v);
        void setAtorPrincipal(string v);
};

#endif
