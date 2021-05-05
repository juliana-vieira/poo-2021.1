#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, positivos = 0;
    double soma = 0, valores[10];
    cout << setprecision(1) << fixed;
    for(i=0; i<6; i++){
        cin >> valores[i];
        if (valores[i] > 0){
            soma += valores[i];
            positivos++;
        }
    }
    cout << positivos << " valores positivos" << endl;
    cout << soma/positivos << endl;

    return 0;
}