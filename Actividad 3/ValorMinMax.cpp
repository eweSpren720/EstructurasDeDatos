#include <iostream>
using namespace std;

int main() {
    int n,num;
    cout << "Ingresa el numero de datos:"<< endl;
    cin >> n;
    int* list = new int[n];

    for (int i = 0; i < n; i++) {
    	cout << "Ingresa el "<< i+1 << " numero:"<< endl;
        cin >> list[i];
    }

    int* max = &list[0];
    int* min = &list[0];

    for (int i = 1; i < n; i++) {
        if (list[i] > *max) {
            max = &list[i];
        }
        if (list[i] < *min) {
            min = &list[i];
        }
    }
    cout << "El valor max: " << *max<< endl;
    cout << "El valor min: " << *min<< endl;

    cout << "Ingresa otro numero: ";
    cin >> num;

    if (num >= *min && num <= *max) {
        cout << "El numero esta en el rango." << endl;
    } else {
        cout << "El numero esta fuera del rango." << endl;
    }
    delete[] list;
    return 0;
}
