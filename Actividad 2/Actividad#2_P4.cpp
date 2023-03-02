#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros a leer: ";
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
    	cout << "Ingrese el "<< i+1 <<" Numero:\n";
        cin >> nums[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (nums[j] > nums[j+1]) {
                int t = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = t;
            }
        }
    }
    cout << "Numero mas grande: " << nums[n-1];
    cout << "\nNumero mas chico: " << nums[0];
    return 0;
}
