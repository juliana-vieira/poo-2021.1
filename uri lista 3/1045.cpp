#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Triangulo {
    private:
        double A, B, C;
    public:
        void ler();
        void ordenarLados();
        bool FormaTriangulo();
        string TipoPeloAngulo(); //OBTUSANGULO ACUTANGULO ou RETANGULO
        string TipoPelosLados(); // EQUILATERO, ISOSCELES ou ESCALENO
};

void Triangulo::ler(){
    cin >> A >> B >> C;
}

void Triangulo::ordenarLados(){
     double aux;
     if (B > A){
        aux = A;
        A = B;
        B = aux;
    }
    if (C > B){
        aux = B;
        B = C;
        C = aux;
    }
    if (A < B){
        aux = A;
        A = B;
        B = aux;
    }
}

bool Triangulo::FormaTriangulo(){
    return A >= B + C ? false : true;
}

string Triangulo::TipoPeloAngulo(){
    if (pow(A,2) == pow(B,2) + pow(C,2))
        return "TRIANGULO RETANGULO\n";
    else if (pow(A,2) > pow(B,2) + pow(C,2))
        return "TRIANGULO OBTUSANGULO\n";
    else if (pow(A,2) < pow(B,2) + pow(C,2))
        return "TRIANGULO ACUTANGULO\n";
}

string Triangulo::TipoPelosLados(){
    if (A == B && B == C && A == C)
        return "TRIANGULO EQUILATERO\n";
    else if (A == B || B == C || A == C)
        return "TRIANGULO ISOSCELES\n";
    else 
        return "";
}

int main(){
    Triangulo t;
    t.ler();
    t.ordenarLados();
    if(t.FormaTriangulo() != false){
        cout << t.TipoPeloAngulo();
        cout << t.TipoPelosLados();
    }
    else
        cout << "NAO FORMA TRIANGULO" << endl;
    return 0;
}