#include <iostream>

using namespace std;

class carta {
    private:
        int qtdAtributos;
        int atributos[100];
    public:
        void lerAtributos(int qtd);
        int obtervalor(int pos); //pos indice apartir de 1
};

class cartas {
    private:
        int qtdCartas;
        carta v[100];
    public:
        void lerCartas(int qtdCartas, int qtdAtributos);
        carta obterCarta(int pos); //pos indice apartir de 1
};

void carta::lerAtributos(int qtd){
    qtdAtributos = qtd;
    for(int i = 0; i<qtdAtributos; i++)
        cin >> atributos[i];
}

void cartas::lerCartas(int qtdCartas, int qtdAtributos){
    for(int i = 0; i<qtdCartas; i++)
        v[i].lerAtributos(qtdAtributos);
}

carta cartas::obterCarta(int pos){
    return v[pos-1];
}

int carta::obtervalor(int pos){
    return atributos[pos-1];
}

int main(){
    carta c;
    cartas m, l;
    int n, l2, m2, escolha1, escolha2, atr, MC, LC;
  
        while(cin >> n){ 
            cin >> m2 >> l2;
            m.lerCartas(m2, n);
            l.lerCartas(l2, n);
            cin >> escolha1 >> escolha2 >> atr;
            c = m.obterCarta(escolha1);
            MC = c.obtervalor(atr);
            c = l.obterCarta(escolha2);
            LC = c.obtervalor(atr);
            if (MC > LC)
                cout << "Marcos" << endl;
            else if (LC > MC)
                cout << "Leonardo" << endl;
            else
                cout << "Empate" << endl;
      }

    return 0;

}