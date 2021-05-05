#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, x, n;
    double total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char a;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x >> a;
        total += x;
        switch (a){
            case 'R':
                ratos += x;
                break;

            case 'S':
                sapos += x;
                break;

            case 'C':
                coelhos += x;
                break;

            default:
                break;
        }
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << setprecision(2) << fixed;
    cout << "Percentual de coelhos: " << (coelhos/total)*100 << " %"<< endl;
    cout << "Percentual de ratos: " << (ratos/total)*100 << " %"<< endl;
    cout << "Percentual de sapos: " << (sapos/total)*100 << " %"<< endl;

    return 0;
}