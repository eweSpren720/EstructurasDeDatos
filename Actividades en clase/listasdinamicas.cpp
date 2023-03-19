#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/*int main() {
	
	int num[10],*dir_num;

	for (int i = 0; i < 10; i++){
		cout<<"dame el valor numero "<<i+1<<": ";
		cin>>num[i];
	}
	cout<<"Numero pares: "<<endl;
	dir_num = num;
	for (int i = 0; i < 10; i++){
		if(dir_num[i]%2==0){
			cout<<"Numero: "<<dir_num[i]<<endl;
			cout<<"Memoria: "<<&dir_num[i]<<endl;
		}
	}
	getch();
	return 0;
}*/
int n;
int* cal = new int[n];
void pedirCal();
void mostrarCal();

int main() {
	
	pedirCal();
	mostrarCal();
	
	delete[] cal;
	getch();
	return 0;
}

void pedirCal(){
	cout<<"dame el numero de calificaciones: "<<endl;
	cin>>n;
	for (int i = 0; i < n; i++){
		cout<<"dame la calificacion numero "<<i+1<<": ";
		cin>>cal[i];
	}
}

void mostrarCal(){
	cout<<"Califiaciones: "<<endl;
	for (int i = 0; i < n; i++){
		cout<<"Califiacion "<<i+1<<": "<<cal[i]<<endl;
	}
}
