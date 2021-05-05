#include <iostream>
#include <iomanip>
#include <math.h>
#define n 3.14159

using namespace std;

int main(){
    double raio;

    cin >> raio;
    cout << setprecision(4) << fixed;
    cout << "A=" << n * pow(raio,2) << endl;

    return 0;
}