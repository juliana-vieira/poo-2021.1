//versão 2 - melhorada apos a aula de correçao

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Disciplina {
    private:
        string nome, professor;
        int codigo, creditos, ano, semestre;
        double nota1, nota2;
    public:
        void ler();
        double media(); 
        void mostrar();


        int getCodigo()                                        {return codigo;}
        int getSemestre()                                      {return semestre;}
        int getAno()                                           {return ano;}
        int getCreditos()                                      {return creditos;}
        string getNome()                                       {return nome;} 
        string getProfessor()                                  {return professor;} 
        
};

class Historico {
    private:
        Disciplina v[100];
        int qtd;
        int obterIndice(int &busca);
    public:
        double CR();
        void inicializarHistorico();
        void inserirDisciplina(Disciplina d);
        int removerDisciplina(int &busca);
        void alterarDisciplina(int &busca, Disciplina d);
        void listarPeloAnoSemestre(int &buscaano, int &buscasemestre);
        void listarPeloProfOuNome(string busca);
        void listarDisciplinas();
        void listarHistorico();
};

void Disciplina::ler(){
    cin >> codigo;
    cin.ignore();
    getline(cin, nome);
    getline(cin, professor);
    cin >> creditos >> ano >> semestre >> nota1 >> nota2;
}

double Disciplina::media(){
    return (nota1 + 2.0*nota2)/3.0;
}

void Disciplina::mostrar(){
    cout << setprecision(2) << fixed;
    cout << setfill('0') << setw(4) << codigo << " ";
    cout << setfill(' ') << setw(54) << left << nome;
    cout << right << creditos << " " << right << ano << "/" << semestre << " ";
    cout << setfill('0') << setw(5) << media() << endl;
}

int Historico::obterIndice(int &busca){
    bool achou = 0;
    int i = 0;
    while (!achou && i <qtd){
        if (busca == v[i].getCodigo())
            achou = 1;
        else
            i++;
    }

    return achou ? i : -1;
}

int Historico::removerDisciplina(int &busca){
    int pos = obterIndice(busca);
    if (pos > -1){
        v[pos] = v[qtd - 1];
        qtd--;
        return 1;
    }else
        return 0;
}

void Historico::alterarDisciplina(int &busca, Disciplina d){
    int pos = obterIndice(busca);
        v[pos] = d;
}

void Historico::inicializarHistorico(){
    qtd = 0;
}

void Historico::inserirDisciplina(Disciplina d){
    v[qtd] = d;
    qtd++;
}

void Historico::listarPeloAnoSemestre(int &buscaano, int &buscasemestre){
    int i;
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for(i = 0; i<qtd; i++)
        if ((v[i].getAno() == buscaano) && (v[i].getSemestre() == buscasemestre))
            v[i].mostrar();
}

void Historico::listarPeloProfOuNome(string busca){
    int i, posnome = 0, posprof = 0;
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for(i = 0; i<qtd; i++){
        posnome = v[i].getNome().find(busca);
        posprof = v[i].getProfessor().find(busca);
        if (posnome > -1 || posprof > -1)
            v[i].mostrar();
    }
}

void Historico::listarDisciplinas(){
    int i;
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for (i = 0; i < qtd; i++)
        v[i].mostrar();
}

double Historico::CR(){
    int i;
    double cr = 0, soma = 0, somacreditos = 0;
    for(i = 0; i<qtd; i++){
        soma += v[i].media() * v[i].getCreditos();
        somacreditos += v[i].getCreditos();
    }
    if (qtd != 0)
        cr = soma/somacreditos;

    return cr;
}

void Historico::listarHistorico(){
    int i;
    cout << setprecision(2) << fixed;
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    for (i = 0; i < qtd; i++)
        v[i].mostrar();
    cout << "Coeficiente de Rendimento                                           " << setfill('0') << setw(5) << right << CR() << endl;
}

int menu(){
    int opc;
    do{
        cout << "1 - inserir nova disciplina" << endl;
        cout << "2 - remover disciplina pelo codigo" << endl;
        cout << "3 - alterar disciplina pelo codigo" << endl;
        cout << "4 - listar todas as disciplinas" << endl;
        cout << "5 - listar disciplinas de um ano/semestre" << endl;
        cout << "6 - listar disciplinas pelo nome/professor" << endl;
        cout << "7 - Historico" << endl;
        cout << "8 - sair" << endl;
        cout << "Entre com a sua opcao:" << endl;
        cin >> opc;
    }while (opc < 1 || opc > 8);

    return opc;
}

void esperarOk(){
    string confirma;
    cin >> confirma;
    while(confirma != "Ok"){
        confirma = " ";
        cin >> confirma;
    }
}

int main(){
    Disciplina d;
    Historico h;
    bool fim = false;
    string busca;
    int buscar, buscarano, buscarsemestre;
    h.inicializarHistorico();
    while(!fim){
        switch (menu()){
        case 1:
            d.ler();
            h.inserirDisciplina(d);
            cout << "Disciplina inserida com sucesso!" << endl;
            break;
        case 2:
            cin >> buscar;
            if(h.removerDisciplina(buscar))
                cout << "Disciplina removida com sucesso!" << endl;
            else
                cout << "Disciplina nao encontrada!" << endl;
            break;
        case 3:
            cin >> buscar;
            if(h.obterIndice(buscar) > -1){
                d.ler();
                h.alterarDisciplina(buscar, d);
                cout << "Disciplina alterada com sucesso!" << endl;
            }else
                cout << "Disciplina nao encontrada!" << endl;
            break;
        case 4:
            h.listarDisciplinas();
            esperarOk();
            break;
        case 5:
            cin >> buscarano >> buscarsemestre;
            h.listarPeloAnoSemestre(buscarano, buscarsemestre);
            esperarOk();
            break;
        case 6:
            cin.ignore();
            getline(cin, busca);
            h.listarPeloProfOuNome(busca);
            esperarOk();
            break;
        case 7:
            h.listarHistorico();
            esperarOk();
            break;
        case 8:
            cout << "Obrigado por utilizar o programa de cadastro, volte sempre!" << endl;
            fim = true;
            break;
        default:
            menu();
            break;
        }
    }
    return 0;
}
