#include<iostream>
#include <string>
#include <ctype.h>

using namespace std;

class Elemento{
    private:
        string simbolo;
        int qtd;
    public:
        string getSimbolo()                                 { return simbolo; }
        int getQtd()                                        { return qtd; }
        void inicializar(string simbolo, int qtd)           { this->simbolo = simbolo; this->qtd = qtd; }
        void inicializar(string simbolo)                    { this->simbolo = simbolo; this->qtd = 1; }
};


class Composto{
    private:
        Elemento v[100];
        int qtd;
    public:
        void atribuirFormula(string formula);
        bool contemComposto(Composto c);
        void mostrar();
};


class Perigosos{
    private:
        Composto v[100];
        int qtd;
    public:
        void limpar();
        void inserir(Composto c);
        bool prossegue(Composto c);
};

bool Composto::contemComposto( Composto c ){
    bool achou = false;
    int i = 0, j;
    while ( !achou && i < qtd-c.qtd+1 ){
        j = 0;
        achou = true;
        while ( j<c.qtd && achou )
            if ( v[i+j].getSimbolo() != c.v[j].getSimbolo() || v[i+j].getQtd() != c.v[j].getQtd() )achou = false;
            else j++;
        i++;
    }
    return achou;
}

void Composto::mostrar(){
    for(int i=0; i<qtd; i++)
      if (v[i].getQtd()!=1) cout << v[i].getSimbolo() << v[i].getQtd() << "-";
      else cout << v[i].getSimbolo() << v[i].getQtd() << "-";
    cout << endl;
}

void Composto::atribuirFormula(string formula){
    qtd = 0;
    int i, tam;
    tam = formula.length();
    i = 0;
    while ( i < tam ){
        char letra = formula[i];
        if (isalpha(letra) && isupper(letra)){
            i++;
            string simbolo = "";    
            simbolo += letra;
            int count = 0;
            while ( i < tam && isalpha(formula[i]) && islower(formula[i]) ){
                simbolo+=formula[i];
                i++;
            }
            while ( i < tam && isdigit(formula[i]) ){
                count = count*10 + formula[i]-'0';
                i++;
            }
            if ( count == 0 )count = 1;
            v[qtd].inicializar(simbolo, count);
            qtd++;
        }
        else i++;
    }
}

void Perigosos::inserir(Composto c){ 

    v[qtd] = c; qtd++; 
}

void Perigosos::limpar(){ 

    qtd = 0;
}

bool Perigosos::prossegue(Composto c){
    for (int i = 0 ; i < qtd ; i++ )
        if (c.contemComposto(v[i]))
            return 1;
    return 0;
}

int main (){
    int qtdP, qtdT, qtdE, i, k, j;
    string s;
    Composto c;
    Perigosos p;
    cin >> qtdT;
    cin.ignore();
    for(i = 0 ; i<qtdT ; i++){
        cin >> qtdP;
        p.limpar(); cin.ignore();
        for (k = 0 ; k < qtdP ; k++){
            getline(cin, s);
            c.atribuirFormula(s);
            p.inserir(c);
        }
        cin >> qtdE; cin.ignore();
        for (k = 0 ; k < qtdE ; k++ ){
            getline(cin, s);
            c.atribuirFormula(s);
            if (p.prossegue(c))
                cout << "Abortar";
            else cout << "Prossiga";
            if (k != qtdE-1 )
                cout << endl;
        }
        cout << "\n";
        if (i != qtdT-1)cout << "\n";
    }
    return 0;
}