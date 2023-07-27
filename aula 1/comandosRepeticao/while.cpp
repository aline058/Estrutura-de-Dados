#include <iostream>

using namespace std;

int main(){

    int number;
    int counter = 0;
    int amount = 0;

    while(counter < 10){
        cout << "Digite um numero (" << counter << ")" << endl;
        cin >> number;

        if(number < 5){
            amount++;
        }

        counter++;
    }

    cout << "quantidade de numeros digitados menores que 5: " << amount << endl;

    return 0;
}