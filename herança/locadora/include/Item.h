#ifndef _ITEM_H_
#define _ITEM_H_

#include "IAlugavel.h"
#include <string>

using namespace std;

class Item : public IAlugavel {
    private:
        string titulo, estilo, produtora, midia;
        int codigo, lancamento;
    public:

        virtual void ler();
        virtual bool buscaString(string busca);                                     

        virtual string getTipo();                        
        int getCodigo();                       
        int getLancamento();                             
        string getTitulo();                              
        string getMidia();                               
        string getEstilo();                              
        string getProdutora();                           
};

#endif