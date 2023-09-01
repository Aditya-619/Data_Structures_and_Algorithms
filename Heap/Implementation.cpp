#include<bits/stdc++.h>
using namespace std;

class MinHeap {
public:
   int *harr;       // pointer to array of elements in heap
   int capacity;    // maximum possible size of min heap
   int heap_size;   // curent number of elements in heap

   MinHeap(int cap) {
      capacity = cap;
      heap_size = 0;
      harr = new int[capacity];   // dynamic array to store elements in min Heap fashion
   }

   int parent(int i) {     // returns parent position
      return (i-1)/2;
   }

   int left(int i) {       // returns left child position
      return (2*i+1);
   }

   int right(int i) {      // returns right child position
      return (2*i+1);
   }

   void insert(int val) {
      if(capacity == heap_size) {
         cout << "Overflow" << endl;
         return;
      }
      heap_size++;
      int i = heap_size-1;
      harr[i] = val;
      while(i != 0 && harr[parent(i)] > harr[i]) {
         swap(harr[i], harr[parent(i)]);
         i = parent(i);
      }
   }

   void minHeapify(int ind) {
      int l = left(ind);
      int r = right(ind);
      int smallest = ind;
      if(l < heap_size && harr[l] < harr[ind]) smallest = l;
      if(r < heap_size && harr[r] < harr[smallest]) smallest = r;
      if(smallest != ind) {
         swap(harr[ind], harr[smallest]);
         minHeapify(smallest);
      }
   }

   int extractMin() {
      if(heap_size <= 0) {
         return INT_MAX;
      }
      if(heap_size == 1) {
         heap_size--;
         return harr[0];
      }
      int root = harr[0];
      harr[0] = harr[heap_size-1];
      heap_size--;
      minHeapify(0);   // for restructuring of the minHeap, as the root(min element) is extraxted.
      return root;
   }

   void printHeap() {
      for(int i=0; i<heap_size; i++) {
         cout << harr[i] << " ";
      } cout << endl;
   }


};

int main() {

	int size; cin>>size;

    MinHeap m(size);

    m.insert(2);
    m.insert(5);
    m.insert(9);
    m.insert(3);

    cout << m.extractMin();

	return 0;
}