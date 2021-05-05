#include <iostream>

using namespace std;

int main(){
    int n, i, a, b, fib;
    a = 0;
    b = 1;

    cin >> n;
    cout << a << " " << b;
    for (i=2; i<n; i++){
        fib = a+b;
        a = b;
        b = fib;
        cout << " " << fib;
    }
    cout << endl;

    return 0;
}