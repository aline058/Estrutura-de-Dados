#include <iostream>

using namespace std;

const int NUM_ELEM = 10;

int main(){
    int c[NUM_ELEM];

    for(int i = 0; i < NUM_ELEM; i++){
        c[i] = 2*i;
    };
    
    for(int i = 0; i < NUM_ELEM; i++){
        cout << "c[" << i << "] = " << c[i] << endl;
    };

    return 0;
}
