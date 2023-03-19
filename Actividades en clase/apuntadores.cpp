#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int num[]={1,2,3,4,5}, *dir_num,*ap;
	cout<<"Metodo 1: "; 
	for (int i = 0; i < 5; i++){
		dir_num = &num[i];
		cout<<*dir_num<<" ";
	}
	
	ap = num;
	cout<<endl<<"Metodo 2: ";
	for (int i = 0; i < 5; i++){
		cout<<&ap[i]<<" ";
	}
	getch();
	return 0;
}
