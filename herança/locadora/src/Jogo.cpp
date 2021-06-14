#include "Jogo.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string Jogo::getTipo()                                  {return "Jogo";     }
string Jogo::getPlataforma()                            {return plataforma; }

void Jogo::ler(){
    Item::ler();
    cin.ignore();
    cout << "Plataforma: ";
    getline(cin, plataforma);
    cout << "Numero de jogadores: ";
    cin >> numjogadores;
}

void Jogo::mostrar(){
    cout << setprecision(2) << fixed;
    cout << setfill('0') << setw(4) << right << getCodigo() 
    << "  "<< getTitulo() << " (" <<getLancamento() << ") - " 
    << getEstilo() << " - "<< plataforma << endl 
    << "      Por: "<< getProdutora() << endl
    << "      Num. jogadores: " << numjogadores << endl << "      PRECO: R$ " << preco() << endl;
}

double Jogo::preco(){
    int achouxbox = 0, achoups5 = 0, achounint = 0;
    double desconto = 0, preco = 0;
    achouxbox = plataforma.find("xbox series");
    achoups5 = plataforma.find("ps5");
    achounint = plataforma.find("nintendo switch");
    if (achouxbox > -1 || achoups5 > -1 || achounint > -1)
        desconto = 1.0;
    else
        desconto = 0.6;

    if (getLancamento() < 2020)
        preco = desconto * 7.00;
    else if(getLancamento() >= 2020)
        preco = desconto * 12.00;

    return preco;
}

bool Jogo::buscaString(string busca){
    return Item::buscaString(busca) || plataforma.find(busca) != string::npos;
}

void Jogo::listarPlataforma(string busca){
    int plat = 0;
    plat = plataforma.find(busca);
    if(plat > -1)
       mostrar();
}