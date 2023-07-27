#include <iostream>

using namespace std;

int main(){
    
    int number1;
    int number2;

    cout << "Digite um numero: ";
    cin >> number1;
    cout << "Digite outro numero: ";
    cin >> number2;
    
    int sum = number1 + number2;
    int sub = number1 - number2;
    int mult = number1 * number2;
    int div = number1 / number2;
    float fdiv = (float)number1 / (float)number2;
    int res = number1 % number2;

    cout << "\nSoma: " << sum;
    cout << "\nSubtracao: " << sub;
    cout << "\nMultiplicacao: " << mult;
    cout << "\nDivisao: " << div;
    cout << "\nDivisao de numero real: " << fdiv;
    cout << "\nResto da divisao: " << res;

    return 0;
}