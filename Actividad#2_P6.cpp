#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b;
    double c;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> a;
    string estudiantes[a];
    
    cout << "Ingrese el numero de calificaciones a ingresar por estudiante: ";
    cin >> b;
    double calificaciones[b],promedio[a];

    for (int i = 0; i < a; i++) {
        cout << "Ingrese el nombre del estudiante " << i+1 << ": ";
        cin >> estudiantes[i];
        for(int j=0; j<b; j++){
			cout << "Ingrese la calificacion #" << i+1 << ": ";
        	cin >> calificaciones[j];
        	promedio[i]+=calificaciones[j];
		}
    }
    for (int i = 0; i < a; i++) {
    	cout << "Promedio del estudiante "<<estudiantes[i]<<": "<< promedio[i]/b<<"\n";
	}
    return 0;
}
