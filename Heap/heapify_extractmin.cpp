#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

class MinHeap {
    int *arr;         // Pointer to array of elements
    int size;         // Current number of elements
    int capacity;     // Maximum possible size of min heap

public:
    // Constructor
    MinHeap(int c) {
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    int left(int i) {
        return (2 * i + 1);
    }

    int right(int i) {
        return (2 * i + 2);
    }

    int parent(int i) {
        return ((i - 1) / 2);
    }

    void insert(int x) {
    if (size == capacity) {
        cout << "Heap overflow\n";
        return;
    }
    size++;
    int i = size - 1;
    arr[i] = x;

    // Fix the min heap property
    while (i != 0 && arr[parent(i)] > arr[i]) {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
}


    void minheapify(int i){
        int lt=left(i), rt= right(i);
        int smallest = i;
        if(lt<size && arr[lt] <arr[i]){
            smallest =lt;
        }
        if(rt<size && arr[rt]<arr[smallest]){
            smallest = rt;
        }
        if(smallest !=i){
            swap(arr[i], arr[smallest]);
            minheapify(smallest);
        }
    }

    int extractmin() {
    if (size == 0)
        return INT_MAX;
    if (size == 1) {
        size--;
        return arr[0];
    }

    int root = arr[0];
    arr[0] = arr[size - 1];
    size--;
    minheapify(0);

    return root;
}

    void printHeap() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // Destructor
    ~MinHeap() {
        delete[] arr;
    }
};


  int main() {
    MinHeap h(10);

    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);

    cout << "Min-Heap array: ";
    h.printHeap();

    cout << "Extracted Min: " << h.extractmin() << endl;
    cout << "After extraction: ";
    h.printHeap();

    return 0;
}
