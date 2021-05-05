#include <iostream>
#include <cstring>

using namespace std;

class subsequencia {
    private:
        string texto;
    public: 
        void setTexto(string txt);
        int Ocorrencias(string substr, int &ultimaPosicao);
};

void subsequencia::setTexto(string txt){
    texto = txt;
}

int subsequencia::Ocorrencias(string substr, int &ultimaPosicao){
    int i, j, qtd = 0;
    bool ehsub;
    for(i=0; i<=texto.size() - substr.size(); i++){
        ehsub = true;
        for(j=0; j<substr.size() && ehsub; j++)
            ehsub = (substr[j] == texto[i+j]);
        if(ehsub){
            qtd++;
            if(i + 1 > ultimaPosicao)
                ultimaPosicao = i+1;
        }
    }
    if(qtd !=0){
        cout << "Qtd.Subsequencias: " << qtd << endl;
        cout << "Pos: " << ultimaPosicao << endl << endl;
    }else
        cout << "Nao existe subsequencia" << endl << endl;

    return 0;
}

int main(){
    subsequencia s;
    string txt, substr;
    int n, caso = 1;

    while (cin >> substr >> txt){
        n = 0;
        s.setTexto(txt);
        cout << "Caso #" << caso << ":" << endl;
        s.Ocorrencias(substr, n);
        caso++;
    }

    return 0;
}