#include<bits/stdc++.h>
using namespace std;

int n = 5;
int front = 0, rear = 0, cnt = 0;
int arr[1001];

void push(int val) {
	if(cnt < n) {
		arr[rear%n] = val;
		rear++;
		cnt++;
	} else {
		cout << "Overflow";
	}
}

void pop() {
	if(cnt == 0) {
		cout << "Underflow";
	}
	arr[front%n] = -1;
	front++;
	cnt--;
}

void frontEle() { // q.front()
	if(cnt == 0) {
		cout << "No element is present in the queue";
	} else {
		cout << arr[front%n];
	}
}

void isEmpty() {
	if(cnt == 0) {
		cout << "yes";
	} else {
		cout << "No";
	}
}
void print() {
	for(int i=front; i<rear; i++) {
		cout << arr[i%n] << " ";
	} cout << endl;
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

//output -> 2 3 4 10