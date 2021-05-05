#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Triangulo{
    private:
        double a, b, c;
    public:
        void ler();
        bool FormaTriangulo();
        bool EhRetangulo();
        string Tipo(); // EQUILATERO, ISOSCELES ou ESCALENO
};

void Triangulo::ler(){
    cin >> a >> b >> c;
}

bool Triangulo::FormaTriangulo(){
    if ((fabs(b-c) < a && b+c > a) || (fabs(a-c) < b && a+c > b) || (fabs(a-b) < c && a+b > c))
        return true;
    else
        return false;
}

bool Triangulo::EhRetangulo(){
    if ((a*a == (b*b) + (c*c)) || (b*b == (a*a) + (c*c)) || (c*c) == (a*a) + (b*b))
        return true;
    else
        return false;
}

string Triangulo::Tipo(){
    if (a == b && b == c && a == c)
        return "Valido-Equilatero";
    else if (a == b || b == c || a == c)
        return "Valido-Isoceles";
    else 
        return "Valido-Escaleno";
}

int main(){
    Triangulo t;
    t.ler();
    if(t.FormaTriangulo() != true){
        cout << "Invalido" << endl;
    }else{
        cout << t.Tipo() << endl;
        if(t.EhRetangulo() == false)
            cout << "Retangulo: N" << endl;
        else
            cout << "Retangulo: S" << endl;
        }
    return 0;
}