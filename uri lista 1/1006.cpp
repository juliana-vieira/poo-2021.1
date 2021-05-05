#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c;

    cout << setprecision(1) << fixed;
    cin >> a >> b >> c;
    cout << "MEDIA = " << (2*a + 3*b + 5*c)/10 << endl;

    return 0;
}