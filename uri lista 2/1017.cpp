#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int horas, vm;
    double x;
    cin >> horas >> vm;
    x = horas*vm;
    cout << setprecision(3) << fixed;
    cout << x/12 << endl;

    return 0;
}