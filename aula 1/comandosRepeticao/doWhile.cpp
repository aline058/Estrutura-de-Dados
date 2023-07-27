#include <iostream>

using namespace std;

int main(){

    int count;
    int number;
    int sum;

    do{
        cout << "Digite um numero: " << endl;
        cin >> number;

        sum += number;
        count++;

    } while(number!=0);

    float average = (float)sum / (count-1);
    cout << "A media dos numeros e: " << average << endl;

    return 0;
}