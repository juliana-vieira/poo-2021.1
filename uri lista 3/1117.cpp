#include <iostream>
#include <iomanip>

using namespace std;

class notas{
    private:
        double nota1, nota2;
    public:
        void ler();
        double media();   
}; 

void notas::ler(){
    int valida1 = 0, valida2 = 0;
    double teste1, teste2;
    while(valida1 != 1){
        cin >> teste1;
        if (teste1 < 0 || teste1 > 10)
            cout << "nota invalida" << endl;
        else{
            nota1 = teste1;
            valida1 = 1;
        }
    }
    while(valida2 != 1){
        cin >> teste2;
        if (teste2 < 0 || teste2 > 10)
            cout << "nota invalida" << endl;
        else{
            nota2 = teste2;
            valida2 = 1;
        }
    }
}

double notas::media(){
    return (nota1+nota2)/2;
}

int main(){
    notas n;
    n.ler();
    cout << setprecision(2) << fixed;
    cout << "media = " << n.media() << endl;
}