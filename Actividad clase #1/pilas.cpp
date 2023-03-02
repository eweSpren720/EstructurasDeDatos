#include <iostream>
#include <conio.h>
#include <stack>


using namespace std;
int main() {
	stack<int> numeros;
	
	numeros.push(5);
	numeros.push(7);
	numeros.push(9);
	numeros.push(12);
	cout<<"size: "<<numeros.size()<<endl;
	cout<<"Top: "<<numeros.top()<<endl;
	numeros.pop();
	cout<<"Top after pop: "<<numeros.top()<<endl;
	
	getch();
	return 0;
}
