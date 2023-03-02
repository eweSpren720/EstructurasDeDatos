#include <iostream>
using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    int num = 0;
    bool p = false;

    for (char c : cadena) {
        if (c == ' ') {
            p = false;
        } else if (!p) {
            num++;
            p = true;
        }
    }

    cout << "Numero de palabras: " << num;

    return 0;
}
