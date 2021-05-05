#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Ponto {
    private:
        double x, y;
    public:
        void ler();
        bool origem(); //verifica se x=0 e y=0
        bool eixoX(); // verifica se y=0
        bool eixoY(); //verifica se x=0
        string obterQuadrante();
};

void Ponto::ler(){
    cin >> x >> y;
}

bool Ponto::origem(){
    return x == 0 && y == 0 ? true : false;
}

bool Ponto::eixoX(){
    return y == 0 ? true : false;
}

bool Ponto::eixoY(){
    return x == 0 ? true : false;
}

string Ponto::obterQuadrante(){
    if (x > 0 && y > 0)
        return "Q1";
    else if (x < 0 && y > 0)
        return "Q2";
    else if (x < 0 && y < 0)
        return "Q3";
    else if (x > 0 && y < 0)
        return "Q4";
}

int main(){
    Ponto p;
    p.ler();
    if(p.origem() == true)
        cout << "Origem" << endl;
    else if (p.eixoX() == true)
        cout << "Eixo X" << endl;
    else if (p.eixoY() == true)
        cout << "Eixo Y" << endl;
    else
        cout << p.obterQuadrante() << endl;
}