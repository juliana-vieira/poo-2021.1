#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

using namespace std;

class Disciplina {
    public:
        virtual void lerdisciplina()            {}
        virtual void listartipo2()              {}
        virtual void listartipo3()              {}
        virtual double media()                  { return 0;      }

        virtual string getNome()                { return "Nome"; }
        virtual int getCodigo()                 { return 0;      }
        virtual int getCreditos()               { return 0;      }
        virtual int getSemestre()               { return 0;      }
        virtual int getAno()                    { return 0;      }
};

class Tipo1 : public Disciplina {
private:
    string nome;
    int creditos, semestre, ano, codigo;
    double nota1, nota2;

public:
    void lerdisciplina();
    double media();

    string getNome()                        { return nome;      }
    int getCodigo()                         { return codigo;    }
    int getAno()                            { return ano;       }
    int getSemestre()                       { return semestre;  }
    int getCreditos()                       { return creditos;  }    
};

void Tipo1::lerdisciplina(){
    cout << "Codigo: ";
    cin >> codigo;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Creditos: ";
    cin >> creditos;
    cout << "Semestre: ";
    cin >> semestre;
    cout << "Ano: ";
    cin >> ano;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
}

double Tipo1::media(){return (nota1 + nota2) / 2;}

class Tipo2 : public Disciplina {
private:
    string nome;
    int creditos, semestre, ano, codigo;
    double nota1, nota2;

public:
    void lerdisciplina();
    void listartipo2();
    double media();

    string getNome()                        { return nome;       }
    int getCodigo()                         { return codigo;     }
    int getAno()                            { return ano;        }
    int getSemestre()                       { return semestre;   }
    int getCreditos()                       { return creditos;   }
};

void Tipo2::lerdisciplina(){
    cout << "Codigo: ";
    cin >> codigo;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Creditos: ";
    cin >> creditos;
    cout << "Semestre: ";
    cin >> semestre;
    cout << "Ano: ";
    cin >> ano;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
}

double Tipo2::media(){return (nota1 + 2 * nota2) / 3;}

void Tipo2::listartipo2(){
    cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
    cout << setprecision(2) << fixed;
    cout << setfill('0') << setw(4) << codigo << " ";
    cout << setfill(' ') << setw(54) << left << nome;
    cout << right << creditos << " " << right << ano << "/" << semestre << " ";
    cout << setfill('0') << setw(5) << media() << endl;
}

class Tipo3 : public Disciplina {
private:
    string nome;
    int creditos, semestre, ano, codigo;
    double notaMonografia, notaApresentacao, notaPratica;

public:
    void lerdisciplina();
    double media();
    void listartipo3();

    string getNome()                        { return nome;       }
    int getCodigo()                         { return codigo;     }
    int getAno()                            { return ano;        }
    int getSemestre()                       { return semestre;   }
    int getCreditos()                       { return creditos;   }
};

void Tipo3::lerdisciplina(){
    cout << "Codigo: ";
    cin >> codigo;
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Creditos: ";
    cin >> creditos;
    cout << "Semestre: ";
    cin >> semestre;
    cout << "Ano: ";
    cin >> ano;
    cout << "Nota Monografia: ";
    cin >> notaMonografia;
    cout << "Nota Apresentacao: ";
    cin >> notaApresentacao;
    cout << "Nota Pratica: ";
    cin >> notaPratica;
}

double Tipo3::media(){return (2 * notaMonografia + 3 * notaApresentacao + notaPratica) / 6;}

void Tipo3::listartipo3(){
    if (notaApresentacao > 7){
        cout << "Cod. Nome                                               Cred  Ano/S Media" << endl;
        cout << setprecision(2) << fixed;
        cout << setfill('0') << setw(4) << codigo << " ";
        cout << setfill(' ') << setw(54) << left << nome;
        cout << right << creditos << " " << right << ano << "/" << semestre << " ";
        cout << setfill('0') << setw(5) << media() << endl;
    }
}

class Historico {
    private:
        Disciplina* v[100];
        int qtd;
        int obterIndice(int busca);

    public:
        Historico();
        virtual ~Historico();
        bool existe(int busca);
        void inserir(Disciplina *d);
        void remover(int busca);
        void alterar(Disciplina *d, int busca);
        void listar();
        void listartp2();
        void listartp3nota();
};

Historico::Historico(){
    qtd = 0;
}

Historico::~Historico(){
    for (int i = 0; i < qtd; i++)
        delete v[i];
}

Disciplina* criarDisciplina(){
    int opc;
    do{
        cout << "1 - Disciplina tipo 1" << endl;
        cout << "2 - Disciplina tipo 2" << endl;
        cout << "3 - Disciplina tipo 3" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opc;
    } while (opc < 1 || opc > 3);
    switch (opc){
        case 1: return new Tipo1();
        case 2: return new Tipo2();
        case 3: return new Tipo3();
        default:
            cout << endl << "Opcao invalida!" << endl;
            exit(0);
    }
}

void Historico::inserir(Disciplina* d){
    v[qtd] = d;
    qtd++;
}

int Historico::obterIndice(int busca){
    bool achou = false;
    int i = 0;
    while (!achou && i < qtd){
        if (busca == v[i]->getCodigo())
            achou = true;
        else
            i++;
    }
    return achou ? i : -1;
}

bool Historico::existe(int busca){
    if (obterIndice(busca) > -1)
        return true;
    else
        return false;
}

void Historico::remover(int busca){
    int pos = obterIndice(busca);
    delete v[pos];
    for (int i = pos + 1; i < qtd; i++){
        v[pos] = v[i];
        pos++;
    }
    qtd--;
}

void Historico::alterar(Disciplina* d, int busca){
    int pos = obterIndice(busca);
    delete v[pos];
    v[pos] = d;
}

void Historico::listar(){
    cout << "Cod. Nome " << setfill(' ') << setw(63) << right << "Cred  Ano/S Media" << endl;
    for (int i = 0; i < qtd; i++){
        cout << setprecision(2) << fixed;
        cout << setfill('0') << setw(4) << right << v[i]->getCodigo() << " ";
        cout << setfill(' ') << setw(54) << left << v[i]->getNome();
        cout << right << v[i]->getCreditos() << " " << right << v[i]->getAno() << "/" << v[i]->getSemestre() << " ";
        cout << setfill('0') << setw(5) << v[i]->media() << endl;
    }
}

void Historico::listartp2(){
    for (int i = 0; i < qtd; i++)
        v[i]->listartipo2();
}

void Historico::listartp3nota(){
    for (int i = 0; i < qtd; i++)
        v[i]->listartipo3();
}

int menu(){
    int opc;
    do{
        cout << "1. inserir disciplina" << endl
             << "2. remover disciplina pelo codigo" << endl
             << "3. alterar dados da disciplina dado o codigo" << endl
             << "4. listar todas as disciplinas (mostrar nome, creditos e media)" << endl
             << "5. listar todas as disciplinas do tipo 2" << endl
             << "6. listar todoas as disciplinas do tipo 3 com nota da apresentacao > 7" << endl
             << "7. Sair" << endl
             << "Escolha uma opcao: ";
        cin >> opc;
    } while (opc < 1 || opc > 7);

    return opc;
}

int main(){
    Disciplina* d;
    Historico h;
    bool fim = false;
    int buscar;
    while (!fim){
        switch (menu()){
        case 1:
            d = criarDisciplina();
            d->lerdisciplina();
            h.inserir(d);
            cout << "Inserida com sucesso!" << endl; break;
        case 2:
            cout << "Digite o codigo da disciplina a ser removida: ";
            cin >> buscar;
            if(h.existe(buscar)){
                h.remover(buscar);
                cout << "Removida com sucesso!" << endl;              
            }else
                cout << "Nao encontrada!" << endl; break;
        case 3:
            cout << "Digite o codigo da disciplina a ser alterada: ";
            cin >> buscar;
            if(h.existe(buscar)){
                d->lerdisciplina();
                h.alterar(d, buscar);
                cout << "Alterada com sucesso!" << endl;
            }else
                cout << "Nao encontrada!" << endl; break;
        case 4:
            h.listar();
            system("pause"); break;
        case 5:
            h.listartp2();                                          
            system("pause"); break;
        case 6:
            h.listartp3nota(); break;
        case 7:
            fim = true; break;
        default:
            cout << "Opcao invalida!" << endl; break;
        }
    }
}
