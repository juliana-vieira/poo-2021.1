#include "Uteis.h"

#include <iostream>
#include <string>

using namespace std;

IAlugavel* criarItem(){
    int opc;
    do{
        cout << "1 - Filme" << endl;
        cout << "2 - Jogo" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opc;
    }while (opc < 1 || opc > 2);
    switch (opc){
        case 1: return new Filme();
        case 2: return new Jogo();
        default:
            cout << endl << "Opcao invalida!" << endl;
            exit(0);
    }
}

int menu(){
    int opc;
    do{
        cout << "1. inserir um novo item (filme ou jogo)" << endl;
        cout << "2. remover um item dado o codigo" << endl;
        cout << "3. alterar os dados de um item" << endl;
        cout << "4. buscar item" << endl;
        cout << "5. listar os jogos de uma plataforma" << endl;
        cout << "6. mostrar o valor do aluguel" << endl;
        cout << "7. Catalogo" << endl;
        cout << "8. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opc;
    }while (opc < 1 || opc > 8);

    return opc;
}