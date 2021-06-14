#ifndef _IALUGAVEL_H_
#define _IALUGAVEL_H_

#include <string>

using namespace std;

class IAlugavel {
    public:
        virtual void ler() = 0;
        virtual void mostrar() = 0;                                 
        virtual double preco() = 0;
        virtual bool buscaString(string busca) = 0;                                   

        virtual int getCodigo() = 0;
        virtual int getLancamento() = 0;
        virtual string getTitulo() = 0;
        virtual string getMidia() = 0;
        virtual string getEstilo() = 0;
        virtual string getTipo() = 0;
};

#endif