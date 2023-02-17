#include <iostream>
using namespace std;

int main() {
    int n,a;
    cout << "Ingrese el tamaño de la matriz (N x N): ";
    cin >> n;
    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento [" << i+1 << "," << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        a += *(matriz[i] + i);
    }

    cout << "La suma de la diagonal es: " << a;

    return 0;
}
