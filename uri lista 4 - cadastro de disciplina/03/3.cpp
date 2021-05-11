#include <iostream>
#include <iomanip>
#include <cstring>

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

class Historico {
    private:
        Disciplina v[100];
        int qtd;
    public:
        void inicializarHistorico(Historico &h);
        void inserirDisciplina(Disciplina d, Historico &h);
        void listarHistorico();
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
    cout << setprecision(2) << fixed;
    cout << setfill('0') << setw(4) << codigo << " ";
    cout << setfill(' ') << setw(54) << left << nome;
    cout << right << creditos << " " << right << ano << "/" << semestre << " ";
    cout << setfill('0') << setw(5) << media() << endl;
}


void Historico::inicializarHistorico(Historico &h){
    h.qtd = 0;
}

void Historico::inserirDisciplina(Disciplina d, Historico &h){
    h.v[h.qtd] = d;
    h.qtd++;
}

void Historico::listarHistorico(){
    int i;
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for (i = 0; i < qtd; i++)
        v[i].mostrar();
}

int menu(){
    int opc;
    do{
        cout << "1 - inicializar" << endl;
        cout << "2 - inserir nova disciplina" << endl;
        cout << "3 - listar historico" << endl;
        cout << "4 - sair" << endl;
        cout << "Entre com a sua opcao:" << endl;
        cin >> opc;
    }while (opc < 1 || opc > 4);

    return opc;
}

int main(){
    Disciplina d;
    Historico h;
    bool fim = false;
    string confirma;
    h.inicializarHistorico(h);
    while(!fim){
        switch (menu()){
        case 1:
            h.inicializarHistorico(h);
            cout << "Historico inicializado com sucesso!" << endl;
            break;
        case 2:
            d.ler();
            h.inserirDisciplina(d, h);
            cout << "Disciplina inserida com sucesso!" << endl;
            break;
        case 3:
            h.listarHistorico();
            cin >> confirma;
            while(confirma != "Ok"){
                confirma = " ";
                cin >> confirma;
            }
            break;
        case 4:
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