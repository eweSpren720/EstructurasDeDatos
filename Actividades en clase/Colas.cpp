#include <iostream>
#include <conio.h>
#include <queue>
#include <stack>
using namespace std;
int n;
queue<int> reverseQueue(queue<int> &cola){
	stack<int> pila;
	for(int i=0; i<n; i++){
		pila.push(cola.front());
		cola.pop();
	}
	
	for(int i=0; i<n; i++){                 
		cola.push(pila.top());
		pila.pop();
	}
	
	return cola;
}

void printQueue(queue<int> cola){
	int m = cola.size();
	for(int i=0; i<m; i++){
		cout<<cola.front();
		cola.pop();
	}
}

queue<int> removeDuplicates(queue<int> &q){
	queue<int> cola2;
	bool counter;
	
	for(int i=0; i<n; i++){
		queue<int> cola3;
		counter = true;
		if (cola2.empty() == false){
			int m = cola2.size();
			for(int i=0; i<m; i++){
				if(q.front() == cola2.front()){
					counter = false;
				}
				cola3.push(cola2.front());
				cola2.pop();
			}
			cola2 = cola3;
			if(counter == true){
				cola2.push(q.front());
			}
			q.pop();
		}else{
			cola2.push(q.front());
			q.pop();
		}
	}
	return cola2;
}

int main() {
	queue<int> myQueue;
	
	myQueue.push(1);
	myQueue.push(1);
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(2);
	myQueue.push(3);
	myQueue.push(2);
	myQueue.push(4);
	myQueue.push(5);
	myQueue.push(9);
	myQueue.push(7);
	myQueue.push(2);
	myQueue.push(9);
	
	
	n = myQueue.size();
	
	//printQueue(reverseQueue(myQueue));
	cout<<endl;
	printQueue(removeDuplicates(myQueue));
	
	getch();
	return 0;
}
