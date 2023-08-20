typedef int TipoItem;
const int max_itens = 100;

class pilha {
    private:
    int tamanho;
    int* estrutura;

    public:
    pilha();
    ~pilha();
    bool estaCheia();
    bool estaVazia();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimir();
    int tamanhoPilha();
};