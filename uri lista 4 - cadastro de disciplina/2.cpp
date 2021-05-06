#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class Disciplina {
    private:
        string nome, professor;
        int codigo, creditos, ano, semestre;
        double nota1, nota2;
    public:
        void ler();
        double media(); 
        void mostrar();
};

void Disciplina::ler(){
    cin >> codigo;
    cin.ignore(1);
    getline(cin, nome);
    getline(cin, professor);
    cin >> creditos >> ano >> semestre >> nota1 >> nota2;
}

double Disciplina::media(){
    return (nota1 + 2.0*nota2)/3.0;
}

void Disciplina::mostrar(){
    cout << setfill('0');
    cout << setprecision(2) << fixed;
    cout << "Codigo    : " << setw(4) << codigo << endl;
    cout << "Nome      : " << nome << endl;
    cout << "Professor : " << professor << endl;
    cout << "Creditos  : " << creditos << endl;
    cout << "Ano       : " << ano << endl;
    cout << "Semestre  : " << semestre << endl;
    cout << "Nota1     : " << nota1 << endl;
    cout << "Nota2     : " << nota2 << endl;
    cout << "Media     : " << media() << endl;
}

int menu(){
    int opc;
    do{
        cout << "1 - ler dados da disciplina" << endl;
        cout << "2 - mostrar os dados da disciplina" << endl;
        cout << "3 - sair" << endl;
        cout << "Entre com a sua opcao:" << endl;
        cin >> opc;
    }while (opc < 1 || opc > 3);

    return opc;
}

int main(){
    Disciplina d;
    bool fim = false;
    string confirma;
    while(!fim){
        switch (menu()){
        case 1:
            d.ler();
            break;
        case 2:
            d.mostrar();
            cin >> confirma;
            while(confirma != "Ok")
                menu();
            break;
        case 3:
            cout << "Obrigado por utilizar o programa de cadastro, volte sempre!" << endl;
            fim = true;
            break;
        default:
            menu();
            break;
        }
    }
    
    return 0;
}
