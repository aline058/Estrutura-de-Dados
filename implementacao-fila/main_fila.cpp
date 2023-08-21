#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    fila fila1;
    int opcao;
    TipoItem item;
    cout << "Programa Gerador de Filas";

    do{
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento\n";
        cout << "Digite 4 para imprimir a fila\n";
        cout << "Digite 0 para sair\n";
        cin >> opcao;
        if(opcao == 1){
            cout << "Digite o elemento\n";
            cin >> item;
            fila1.inserir(item);
        } else if(opcao == 2){
            item = fila1.remover();
            cout << "Elemento " << item << "removido " << endl;
        } else if(opcao == 3){
            fila1.imprimir();
        }
    }while(opcao !=0);
}