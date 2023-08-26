#include<bits/stdc++.h>
using namespace std;

stack<int> inp;
stack<int> out;

void push(int val) {
	inp.push(val);
}

void pop() {
	if(!out.empty()) {
		cout << out.pop();
	} else {
		while(!inp.empty()) {
			out.push(inp.top());
			inp.pop();
		}
		cout << out.pop();
	}
}

void top() {
	if(!out.empty()) {
		cout << out.top();
	} else {
		while(!inp.empty()) {
			out.push(inp.top());
			inp.pop();
		}
		cout << out.top();
	}
}

void print() {
	if(inp.empty()) {
		while(!out.empty()) {
			cout << out.top() << " ";
			out.pop();
		}
	} else {
		while(!inp.empty()) {
			out.push(inp.top());
			inp.pop();
		}
		while(!out.empty()) {
			cout << out.top() << " ";
			out.pop();
		}
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
