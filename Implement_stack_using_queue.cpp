#include<bits/stdc++.h>
using namespace std;

queue<int> q;
int size = 0;

void push(int val) {
	q.push(val);
	for(int i=0; i<q.size()-1; i++) {
		q.push(q.front());
		q.pop();
	}
}

void pop() {
	q.pop();
}

void top() {
	q.front();
}

void print() {
	while(!q.empty()) {
		cout << q.front() << " ";
		q.pop();
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

// output -> 10 3 2 1