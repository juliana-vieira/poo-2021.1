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

int main(){
    Disciplina d;
    d.ler();
    d.mostrar();

    return 0;
}
