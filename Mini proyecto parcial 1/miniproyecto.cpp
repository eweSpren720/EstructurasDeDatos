#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
    int n,num,a,b;
    srand(time(NULL));
    while(true){
    	cout<<"Bienvenido a adivina el numero"<<endl;
    	cout << "Ingresa el rango: "<<endl;
    	cout << "Numero menor: "<<endl;
    	cin>>a;
    	cout << "Numero mayor: "<<endl;
    	cin>>b;
    	if (a<b && a>=0)
    		break;
    	else
    		cout<<"Rango invalido, intentan de nuevo"<<endl;
	}
	n = (rand()%(b-a))+a;
	int* n2 = &n;
    cout << "Adivina el numero(entre "<<a<<" y "<<b<<"): "<<endl;
    cout << "Intento numero 1: "<<endl;
    cin >> num;
    for(int i=2; i<=6; i ++) {
    	if(i==6)
    		cout << "Lo siento, has perdido.";
    	else if(num == *n2){
        	i=6;
        	cout << "Correcto, has acertado.";
		}
        else if (num < n) {
            cout << "Incorrecto. El numero es mayor: "<<endl;
            cout << "Intento numero "<< i <<": "<<endl;
            cin >> num;
        } else {
            cout << "Incorrecto. El numero es menor: "<<endl;
			cout << "Intento numero "<< i <<": "<<endl;
            cin >> num;
        }
    }
    return 0;
}
