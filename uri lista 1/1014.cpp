#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x;
    double y;

    cout << setprecision(3) << fixed;

    cin >> x >> y;
    cout << (x/y) << " km/l" << endl;

    return 0;

}