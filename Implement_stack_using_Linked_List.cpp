#include <bits/stdc++.h>
using namesapace std;

struct Node {
   int data;
   Node* next;
   int size;
   Node(int val) {
      data = val;
      next = NULL;
   }
};

struct myStack {
   Node* head;
   int size;
   stack() {
      head = NULL;
      size = 0;
   }

   void push(int val) {
      Node* element = new Node(val);
      element->next = head;
      head = element;
      // cout << "Element pushed" << endl;
      size++;
   }

   void pop() {
      if(head == NULL) {
         cout << "Underflow" << endl;
      } else {
         int topData = head->data;
         Node* temp = head;
         head = head->next;
         delete temp;
         size--;
         cout << "Poped element is " << topData << endl;
      }
   }

   void stackSize() {
      cout << size << endl;
   }

   void top() {
      if(head == NULL) {
         cout << "No element is present in stack" << endl;
      } else {
         cout << head->data << endl;
      }
   }

   void isEmpty() {
      if(head == NULL) {
         cout << "Stack is empty" << endl;
      } else {
         cout << "Stack is not empty" << endl;
      }
   }

   void print() {
      Node* cur = head;
      while(cur->next != NULL) {
         cout << cur->data << " ";
         cur = cur->next;
      }
   }
};

int main() {

   myStack s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.pop();
   s.print();


	return 0;
}