#include "Filme.h"

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string Filme::getTipo()                                {return "Filme";   }
string Filme::getDiretor()                             {return diretor;   }

void Filme::ler(){
    Item::ler();
    cin.ignore();
    cout << "Ator Principal: ";
    getline(cin, atorprincipal);
    cout << "Diretor: ";
    getline(cin, diretor);
}

bool Filme::buscaString(string busca){
    return Item::buscaString(busca) || atorprincipal.find(busca) != string::npos || diretor.find(busca) != string::npos;
}

double Filme::preco(){
    double preco = 0;
    if(getLancamento() < 2020)
        preco = 5.00;
    else if (getLancamento() >= 2020)
        preco = 7.00;

    return preco;
}

void Filme::mostrar(){
    cout << setprecision(2) << fixed;
    cout << setfill('0') << setw(4) << right << getCodigo() 
    << "  "<< getTitulo() << " (" << getLancamento() << ") - " 
    << getEstilo() << " - "<< getMidia() << endl 
    << "      Dirigido por: "<< diretor << endl << "      PRECO: R$ " << preco() << endl;
}