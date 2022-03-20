#include<iostream>
#define size 5
using namespace std;
int stack[size];
int Top;
void Topvalue() {
	Top == -1;
}
int isEmpty() {
	if (Top == - 1) {
		return 1;
	}
	else
		return 0;
}
int isfull() {
	if (Top == size - 1) {
		return 1;
	}
	else
		return 0;
}
void push(int n) {
if(isfull()){
	cout << "Stack is full" << endl;

}
else {
	++Top;
	stack[Top] = n;
}
}

void display() {
	if (isEmpty()) {
		cout << "Stack is Empty:" << endl;
		return;
	}
	else 
		for (int i = Top; i > 0; i--) {
			cout << stack[i] << endl;
		}
	
}
void pop() {
	int temp;
	if (isEmpty()) {
		cout << "Stack is Empty:" << endl;
		return;
	}
	else {

		temp = stack[Top];
		Top--;
		cout << temp << "\n Stack has been deleted:" << endl;
		cout<<"\n\nRemaining values in stack are :"<<endl;
		display();

	}
}
int main() {
	Topvalue();
	isEmpty();
	isfull();
	push(25);
	push(23);
	push(55);
	display();
	pop();
	
	return 0;
	}
