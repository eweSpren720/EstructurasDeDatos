#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    int n,i;
    srand(time(NULL));
	n = 1+rand()%(101-1);
    cout << "Adivina el numero(entre 1 y 100): ";
    cin >> i;
    while (i != n) {
        if (i < n) {
            cout << "Incorrecto. El numero es mayor: ";
            cin >> i;
        } else {
            cout << "Incorrecto. El numero es menor: ";
            cin >> i;
        }
    }
    cout << "Correcto, has acertado.";
    return 0;
}
