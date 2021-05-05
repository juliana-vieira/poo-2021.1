#include <iostream>
#include <cstdlib>

using namespace std;

class vetor {
    private:
        int v[200], qtd;
    public:
        void ler(int n);
        void ordenar();  //usar o qsort
        int obterNota(int i);//retorna a nota dado o indice i (de 1 a qtd)
};

int comparador(const void * a, const void * b){
    const int* x = (int*) a;
    const int* y = (int*) b;

    if (*x < *y)return 1;
    else if (*x > *y)return -1;

    return 0;
}

void vetor::ler(int n){
    int i;
    qtd = n;
    for(i=0; i<qtd; i++)
        cin >> v[i]; 
}

void vetor::ordenar(){
    qsort(v, qtd, sizeof(int), comparador);
}

int vetor::obterNota(int i){
        return v[i];
}

int main(){
    vetor v;
    int i, j, habitantes, consultas;
    while(cin >> habitantes >> consultas){
        v.ler(habitantes);
        v.ordenar();
        for(j=0; j<consultas; j++){
            cin >> i;
            cout << v.obterNota(i-1) << endl;
        }
    }
    return 0;
}