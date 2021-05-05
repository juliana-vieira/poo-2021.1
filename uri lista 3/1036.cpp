#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

class Eq2Grau {
    private:
        double a, b, c;
    public:
        void ler();
        double delta();
        int raizes();   // retorna a quantidade de raizes reais
        double raiz1(); // returno o valor da raiz1
        double raiz2(); // returno o valor da raiz2
};

void Eq2Grau::ler(){
    cin >> a >> b >> c;
}

double Eq2Grau::delta(){
    return pow(b,2) - 4 * a * c;
}

int Eq2Grau::raizes(){
    if (delta() > 0 && a > 0)
        return 2;
    else
        return 0;  
}

double Eq2Grau::raiz1(){
    return (- b + sqrt(delta()))/(2*a);
}

double Eq2Grau::raiz2(){
    return (- b - sqrt(delta()))/(2*a);
}

int main(){
    Eq2Grau eq;
    eq.ler();
    eq.delta();
    if(eq.raizes() > 0){
        cout << setprecision(5) << fixed;
        cout << "R1 = " << eq.raiz1() << endl;
        cout << "R2 = " << eq.raiz2() << endl;
    }else 
        cout << "Impossivel calcular" << endl;
}