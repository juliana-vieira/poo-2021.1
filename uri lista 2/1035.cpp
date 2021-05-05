#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, soma1, soma2;
    cin >> a >> b >> c >> d;
    soma1 = c+d;
    soma2 = a+b;
    if (b > c && d > a && soma1 > soma2 && c > 0 && d > 0 && a%2 == 0)
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;
    return 0;
}