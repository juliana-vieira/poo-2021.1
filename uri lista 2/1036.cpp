#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, r1 = 0, r2 = 0, delta = 0;
    cin >> a >> b >> c;
    cout << setprecision(5) << fixed;
    delta = pow(b,2) - 4*a*c;
    if (delta > 0 && a > 0){
        r1 = (-b + sqrt(delta))/(2*a);
        r2 = (-b - sqrt(delta))/(2*a);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }else
        cout << "Impossivel calcular" << endl;
    return 0;
}