#include <iostream>

using namespace std;

int ehprimo(int x){
    int i, div = 0;
    for(i=1; i<=x; i++){
        if(x%i == 0)
            div++;
    }
    if (div == 2)
        return 1;

    return 0;
}

int main(){
    int n, x, i;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> x;
        if (ehprimo(x))
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }
    return 0;
}