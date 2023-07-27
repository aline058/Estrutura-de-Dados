#include <iostream>

using namespace std;

int sum(int number1, int number2){
        return number1 + number2;
    };

    int sub(int number1, int number2){
        return number1 - number2;
    };

    int mult(int number1, int number2){
        return number1 * number2;
    };

    int idiv(int number1, int number2){
        return number1 / number2;
    };

int main(){

  int number1;
  int number2;

  cout << "Digite um numero: " << endl;
  cin >> number1;
  cout << "Digite outro numero: " << endl;
  cin >> number2;

  cout << "Soma: " << sum(number1, number2) << endl;
  cout << "Subtracao: " << sub(number1, number2) << endl;
  cout << "Multiplicacao: " << mult(number1, number2) << endl;
  cout << "Divisao: " << idiv(number1, number2) << endl;

    return 0;
}