#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dimensione;
    cin >> dimensione;
    float array[dimensione];
    fot (int i=0; i<dimensione ; i++){
        cin >> array[i];
    }
    float ris= max(dimensione,array);
    cout<<ris<<endl;
    return 0;
}
