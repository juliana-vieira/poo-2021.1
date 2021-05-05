#include <iostream>

using namespace std;

int main(){
    int n, i, qtd, notas[7] = {100, 50, 20, 10, 5, 2, 1};
    cin >> n;
    cout << n << endl;
    for (i=0; i<=6; i++){
        qtd = n/notas[i];
        n -= notas[i]*qtd;
        cout << qtd << " nota(s) de R$ " << notas[i] << ",00" << endl;
    }
    return 0;
}