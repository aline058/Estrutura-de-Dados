#include <iostream>

using namespace std;

int main(){
    int num_elem;
    cout << "Digite o tamanho do vetor"<< endl;
    cin >> num_elem;

    int *c =  new int[num_elem];

    for(int i = 0; i < num_elem; i++){
        c[i] = i*2;
    };

    for(int i = 0; i < num_elem; i++){
        cout << "c["<< i << "] = " << c[i] << endl;
    };

    

    

}