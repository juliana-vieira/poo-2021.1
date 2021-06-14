#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

int Item::getCodigo()                                 {return codigo;       } 
int Item::getLancamento()                             {return lancamento;   }
string Item::getTitulo()                              {return titulo;       }
string Item::getMidia()                               {return midia;        }
string Item::getEstilo()                              {return estilo;       }
string Item::getProdutora()                           {return produtora;    }
string Item::getTipo()                                {return "Tipo";       }

void Item::ler(){
    cout << "Codigo: ";
    cin >> codigo;
    cout << "Titulo: ";
    cin.ignore();
    getline(cin, titulo);
    cout << "Estilo: ";
    getline(cin, estilo);
    cout << "Produtora: ";
    getline(cin, produtora);
    cout << "Midia: ";
    getline(cin, midia);
    cout << "Ano de lancamento: ";
    cin >> lancamento;
}

bool Item::buscaString(string busca){
    return titulo.find(busca) != string::npos || estilo.find(busca) != string::npos 
    || produtora.find(busca) != string::npos || midia.find(busca) != string::npos;
}


