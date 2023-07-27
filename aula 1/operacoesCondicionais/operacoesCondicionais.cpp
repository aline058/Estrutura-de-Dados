#include <iostream>

using namespace std;

int main(){

    int number1;
    int number2;

    cout << "\nDigite o primeiro numero: ";
    cin >> number1;
    cout << "\nDigite o segundo numero: ";
    cin >> number2;

    if (number1 == number2)
    cout << number1 << " e igual a " << number2 <<"\n";
    if (number1 != number2)
    cout << number1 << " e diferente de " << number2 <<"\n";
    if (number1 < number2)
    cout << number1 << " e menor que " << number2 <<"\n";
    if (number1 > number2)
    cout << number1 << " e maior que " << number2 <<"\n";

    return 0;
}