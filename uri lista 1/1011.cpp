#include <iostream>
#include <iomanip>
#include <math.h>
#define pi 3.14159

using namespace std;

int main(){
    double r;

    cout << setprecision(3) << fixed;
    cin >> r;
    cout << "VOLUME = " << (4/3.0) * pi * pow(r,3);

    return 0;

}