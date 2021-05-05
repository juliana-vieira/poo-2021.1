#include <iostream>

using namespace std;

int main(){
    int n, i;

    cin >> n;
    for(i = 1; n > 1; n--){
       i = i*n;
    }

    cout << i << endl;

    return 0;
}