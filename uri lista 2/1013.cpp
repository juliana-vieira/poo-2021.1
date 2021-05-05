#include <iostream>

using namespace std;

int main(){
    int a, b, c, maior, aux;

    cin >> a >> b >> c;
    aux = (a+b+abs(a-b))/2;
    maior = (aux+c+abs(aux-c))/2;
    cout << maior << " eh o maior" << endl;
    return 0;
}