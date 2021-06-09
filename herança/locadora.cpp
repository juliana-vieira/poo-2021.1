#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class IAlugavel {
    public:
        virtual void ler() = 0;
        virtual void mostrar() = 0;                                 
        virtual double preco() = 0;
        virtual bool buscafilme(string busca) = 0;                  
        virtual bool buscajogo(string busca)  = 0;                 
        virtual void listarPlataforma(string busca) = 0;   

        virtual int getCodigo() = 0;
        virtual int getLancamento() = 0;
        virtual string getTitulo() = 0;
        virtual string getMidia() = 0;
        virtual string getEstilo() = 0;
        virtual string getTipo() = 0;
};

class Item : public IAlugavel {
    private:
        string titulo, estilo, produtora, midia;
        int codigo, lancamento;
    public:
        int getCodigo()                                 {return codigo;       } 
        int getLancamento()                             {return lancamento;   }
        string getTitulo()                              {return titulo;       }
        string getMidia()                               {return midia;        }
        string getEstilo()                              {return estilo;       }
        string getProdutora()                           {return produtora;    }

        virtual void ler();
        virtual bool buscafilme(string busca)           {}             
        virtual bool buscajogo(string busca)            {}          
        virtual void listarPlataforma(string busca)     {}
        virtual string getTipo()                        {return "Tipo";       }
};

void Item::ler(){
    cout << "Codigo: ";
    cin >> codigo;
    cout << "Titulo: ";
    cin.ignore();
    getline(cin, titulo);
    cout << "Estilo: ";
    getline(cin, estilo);
    cout << "Produtora: ";
    getline(cin, produtora);
    cout << "Midia: ";
    getline(cin, midia);
    cout << "Ano de lancamento: ";
    cin >> lancamento;
}

class Filme : public Item {
    private:
        string atorprincipal, diretor;
    public:
        virtual void ler();
        virtual void mostrar();
        virtual double preco();
        virtual bool buscafilme(string busca);

        virtual string getTipo()                        {return "Filme";   }
        string getDiretor()                             {return diretor;   }
};

void Filme::ler(){
    Item::ler();
    cin.ignore();
    cout << "Ator Principal: ";
    getline(cin, atorprincipal);
    cout << "Diretor: ";
    getline(cin, diretor);
}

double Filme::preco(){
    double preco = 0;
    if(getLancamento() < 2020)
        preco = 5.00;
    else if (getLancamento() >= 2020)
        preco = 7.00;

    return preco;
}

void Filme::mostrar(){
    cout << setprecision(2) << fixed;
    cout << setfill('0') << setw(4) << right << getCodigo() << "    " << getTipo() << "   " 
    << getTitulo() << setfill (' ') << setw(10) << right;
    cout << getMidia() << "  " << setw(4) << right << getLancamento() << "  R$ " 
    << setw(5) << right << preco() << endl;
}

bool Filme::buscafilme(string busca){
    int titulo = 0, estilo = 0, ator = 0, dir = 0, prod = 0, midia = 0;
    titulo = getTitulo().find(busca);
    estilo = getEstilo().find(busca);
    ator = atorprincipal.find(busca);
    dir = diretor.find(busca);
    prod = getProdutora().find(busca);
    midia = getMidia().find(busca);

    if (titulo > -1 || estilo > -1 || ator > -1 || dir > -1 || prod > -1 || midia > -1){
        mostrar();
    }
}

class Jogo : public Item {
    private:
        string plataforma;
        int numjogadores;
    public:
        virtual void ler();
        virtual double preco();
        virtual void mostrar();
        virtual bool buscajogo(string busca);
        virtual void listarPlataforma (string busca);

        virtual string getTipo()                        {return "Jogo";     }
        string getPlataforma()                          {return plataforma; }
};

void Jogo::ler(){
    Item::ler();
    cin.ignore();
    cout << "Plataforma: ";
    getline(cin, plataforma);
    cout << "Numero de jogadores: ";
    cin >> numjogadores;
}

void Jogo::mostrar(){
    cout << setprecision(2) << fixed;
    cout << setfill('0') << setw(4) << right << getCodigo() << "    " << getTipo() << "   " 
    << getTitulo() << setfill (' ') << setw(10) << right;
    cout << getMidia() << "  " << setw(4) << right << getLancamento() << "  R$ " 
    << setw(5) << right << preco() << endl;

}

double Jogo::preco(){
    int achouxbox = 0, achoups5 = 0, achounint = 0;
    double desconto = 0, preco = 0;
    achouxbox = plataforma.find("xbox series");
    achoups5 = plataforma.find("ps5");
    achounint = plataforma.find("nintendo switch");
    if (achouxbox > -1 || achoups5 > -1 || achounint > -1)
        desconto = 1.0;
    else
        desconto = 0.6;

    if (getLancamento() < 2020)
        preco = desconto * 7.00;
    else if(getLancamento() >= 2020)
        preco = desconto * 12.00;

    return preco;
}

bool Jogo::buscajogo(string busca){
    int titulo = 0, estilo = 0, plat = 0, prod = 0, midia = 0;
    titulo = getTitulo().find(busca);
    estilo = getEstilo().find(busca);
    plat = plataforma.find(busca);
    prod = getProdutora().find(busca);
    midia = getMidia().find(busca);

    if (titulo > -1 || estilo > -1 || plat > -1 || prod > -1 || midia > -1){
        mostrar();
    }
}

void Jogo::listarPlataforma(string busca){
    int plat = 0;
    plat = plataforma.find(busca);
    if(plat > -1)
       mostrar();
}

class Locadora {
    private:
        IAlugavel* v[100];
        int qtd;
        int getIndice(int codigo);
    public:
        Locadora()                             {qtd = 0;}
        virtual ~Locadora();                    
        void inserir(IAlugavel* i);
        void remover(int codigo);
        void alterar(int codigo, IAlugavel* i);
        void listar();
        void listaritem(string busca);
        void listarplataforma(string busca);
        void mostrarvalor(int codigo);
        bool existe(int codigo);
        void mostrar();
};

Locadora::~Locadora(){
    for(int i = 0; i<qtd; i++)
        delete v[i];
}

int Locadora::getIndice(int codigo){
    bool achou = false;
    int i = 0;
    while(!achou && i < qtd){
        if(codigo == v[i]->getCodigo())
            achou = true;
        else
            i++;
    }
    return achou ? i : -1;
}

bool Locadora::existe(int codigo){
    if(getIndice(codigo) > -1)
        return true;
}

void Locadora::inserir(IAlugavel* i){
    v[qtd] = i;
    qtd++;
}

void Locadora::remover(int codigo){
    int pos = getIndice(codigo);
    delete v[pos];
    for(int i = 0; i<qtd; i++)
        v[i-1] = v[i+1];
    qtd--;
}

void Locadora::alterar(int codigo, IAlugavel* i){
    int pos = getIndice(codigo);
    delete v[pos];
    v[pos] = i;
}

void Locadora::listar(){
    cout << "CATEGORIA: Filmes" << endl;
    for(int i = 0; i<qtd; i++){
        cout << setprecision(2) << fixed;
        if(v[i]->getTipo() == "Filme"){
            cout << setfill('0') << setw(4) << right << v[i]->getCodigo() 
            << "  "<< v[i]-> getTitulo() << " (" << v[i]->getLancamento() << ") - " 
            << v[i]->getEstilo() << " - "<< v[i]->getMidia() << endl 
            << "      Dirigido por: "<< ((Filme*)v[i])->getDiretor() << endl << "      PRECO: R$ " << v[i]->preco() << endl;
        }
    }
    cout << "CATEGORIA: Jogos" << endl;
    for(int i = 0; i<qtd; i++){
        if(v[i]->getTipo() == "Jogo"){
            cout << setfill('0') << setw(4) << right << v[i]->getCodigo() 
            << "  "<< v[i]-> getTitulo() << " (" << v[i]->getLancamento() << ") - " 
            << v[i]->getEstilo() << " - "<< ((Jogo*)v[i])->getPlataforma() << endl 
            << "      Por: "<< ((Jogo*)v[i])->getProdutora() << endl << "      PRECO: R$ " << v[i]->preco() << endl;
        }
    }
}

void Locadora::listaritem(string busca){
    cout << "Cod.    " << "Tipo   " << "Titulo" 
    << setfill (' ') << setw(20) << "Midia" << "  " << "Ano" << "  " << "Valor da Diaria" << endl;
    for(int i = 0; i<qtd; i++){
        v[i]->buscafilme(busca); 
        v[i]->buscajogo(busca);
    }
}

void Locadora::listarplataforma(string busca){
    cout << "Cod.    " << "Tipo   " << "Titulo" 
    << setfill (' ') << setw(20) << "Midia" << "  " << "Ano" << "  " << "Valor da Diaria" << endl;
    for(int i = 0; i<qtd; i++)
        v[i]->listarPlataforma(busca);
}

void Locadora::mostrarvalor(int codigo){
    int pos = getIndice(codigo);
    v[pos]->mostrar();
}

IAlugavel* criarItem(){
    int opc;
    do{
        cout << "1 - Filme" << endl;
        cout << "2 - Jogo" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opc;
    }while (opc < 1 || opc > 2);
    switch (opc){
        case 1: return new Filme();
        case 2: return new Jogo();
        default:
            cout << endl << "Opcao invalida!" << endl;
            exit(0);
    }
}

int menu(){
    int opc;
    do{
        cout << "1. inserir um novo item (filme ou jogo)" << endl;
        cout << "2. remover um item dado o codigo" << endl;
        cout << "3. alterar os dados de um item" << endl;
        cout << "4. buscar item" << endl;
        cout << "5. listar os jogos de uma plataforma" << endl;
        cout << "6. mostrar o valor do aluguel" << endl;
        cout << "7. Catalogo" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opc;
    }while (opc < 1 || opc > 7);

    return opc;
}

int main(){
    IAlugavel* i;
    Locadora l;

    int cod;
    string busca;
    bool fim = false;

    while(!fim){
        switch(menu()){
        case 1:
            i = criarItem();
            i->ler();
            l.inserir(i);
            break;
        case 2:
            cout << "Digite o codigo do item: ";
            cin >> cod;
            if(l.existe(cod))
                l.remover(cod);
            else
                cout << "Nao encontrado" << endl;
            break;
        case 3:
            cout << "Digite o codigo do item: ";
            cin >> cod;
            if(l.existe(cod)){
                i->ler();
                l.alterar(cod, i);
            }else
                cout << "Nao encontrado" << endl;
            break;
        case 4:
            cin.ignore();
            getline(cin, busca);
            l.listaritem(busca);
            break; 
        case 5:
            cin.ignore();
            getline(cin,busca);
            l.listarplataforma(busca);
            break;
        case 6:
            cin >> cod;
            if(l.existe(cod))
                l.mostrarvalor(cod);
            else
                cout << "Nao encontrado" << endl;
            break;
        case 7:
            l.listar();
            break;
        }
    }

    return 0;
}
