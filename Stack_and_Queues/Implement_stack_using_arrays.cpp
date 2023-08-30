#include<bits/stdc++.h>
using namespace std;

int n = 5;
int t = -1;
int arr[1001];

void push(int val) {
	if(t >= n) {
		cout << "Stack Overflow";
	} else {
	    arr[++t] = val;
	}
}

void pop() {
	if(t <= -1) {
		cout << "Stack Underflow";
	} else {
		t--;
	}
}

void top() {
	if(t >= 0) {
		cout << arr[t];
	} else {
		cout << "Stack Underflow";
	}
}

void isEmpty() {
	if(t < 0) {
		cout << "Stack is empty";
	} else {
		cout << "Stack is not empty";
	}
}

void print() {
	if(t >= 0) {
		for(int i=t; i>=0; i--){
			cout << arr[i] << " ";
		} cout << endl;
	} else {
		cout << "Stack is empty";
	}
}

int main() {

	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	push(10);
	print();

	return 0;
}

//output -> 10 3 2 1