#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilha pilha1;
    TipoItem item;
    int opcao;

    cout << "Programa Gerador de Pilhas\n";

    do{
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 3 para imprimir a pilha\n";
        cout << "Digite 4 para verificar o tamanho da pilha\n";
        cout << "Digite 0 para sair\n";
        cin >> opcao;

        if(opcao == 1){
            cout << "Digite o elemento\n";
            cin >> item;
            pilha1.inserir(item);
        } else if (opcao == 2){
           item = pilha1.remover();
           cout << "elemento removido: " << item << endl;
        } else if (opcao == 3){
            pilha1.imprimir();
        } else if (opcao == 4) {
            pilha1.tamanhoPilha();

        }
    } while (opcao != 0);


    return 0;
}