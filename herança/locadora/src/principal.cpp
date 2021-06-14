#include "IAlugavel.h"
#include "Item.h"
#include "Filme.h"
#include "Jogo.h"
#include "Uteis.h"
#include "Locadora.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    IAlugavel* i;
    Locadora l;

    int cod;
    string busca;
    bool fim = false;

    while(!fim){
        switch(menu()){
        case 1:
            i = criarItem();
            i->ler();
            l.inserir(i);
            system("pause");  break;
        case 2:
            cout << "Digite o codigo do item: ";
            cin >> cod;
            if(l.existe(cod))
                l.remover(cod);
            else
                cout << "Nao encontrado" << endl;
            system("pause");  break;
        case 3:
            cout << "Digite o codigo do item: ";
            cin >> cod;
            if(l.existe(cod)){
                i->ler();
                l.alterar(i, cod);
            }else
                cout << "Nao encontrado" << endl;
            system("pause"); break;
        case 4:
            cout << "Pesquisar: ";
            cin.ignore();
            getline(cin, busca);
            l.listaritem(busca);
            system("pause"); break; 
        case 5:
            cout << "Pesquisar: ";
            cin.ignore();
            getline(cin,busca);
            l.listarplataforma(busca);
            system("pause"); break;
        case 6:
            cout << "Digite o codigo do item: ";
            cin >> cod;
            if(l.existe(cod))
                l.mostrarvalor(cod);
            else
                cout << "Nao encontrado" << endl;
            system("pause"); break;
        case 7:
            l.listar();
            system("pause"); break;
        case 8:
            cout << "Volte sempre!" << endl;
            fim = true;
            break;
        }
    }

    return 0;
}
