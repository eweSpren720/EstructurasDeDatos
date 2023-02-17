#include <iostream>
#include <stack>
#include <string>

using namespace std;

double evaluarExpresion(string expresion) {
    stack<double> numeros;
    stack<char> operadores;

    for (int i = 0; i < expresion.size(); i++) {
        if (expresion[i] == ' ') {
            continue;
        } else if (expresion[i] >= '0' && expresion[i] <= '9') {
            double numero = 0;
            while (i < expresion.size() && expresion[i] >= '0' && expresion[i] <= '9') {
                numero = (numero * 10) + (expresion[i] - '0');
                i++;
            }
            numeros.push(numero);
            i--;
        } else if (expresion[i] == '+' || expresion[i] == '-' ||
                   expresion[i] == '*' || expresion[i] == '/') {
            operadores.push(expresion[i]);
        }
    }
    while (!operadores.empty()) {
        double b = numeros.top();
        numeros.pop();
        double a = numeros.top();
        numeros.pop();
        char op = operadores.top();
        operadores.pop();
        if (op == '+') {
            numeros.push(a + b);
        } else if (op == '-') {
            numeros.push(a - b);
        } else if (op == '*') {
            numeros.push(a * b);
        } else if (op == '/') {
            numeros.push(a / b);
        }
    }
    return numeros.top();
}

int main() {
    string expresion;
    cout << "Ingrese una operacion: ";
    getline(cin, expresion);

    double resultado = evaluarExpresion(expresion);
    cout << "El resultado es: " << resultado;

    return 0;
}
