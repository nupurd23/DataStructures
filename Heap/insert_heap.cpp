#include<iostream>
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

        // Fix the min heap property if it is violated
        while (i != 0 && arr[parent(i)] > arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
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

// Example usage
int main() {
    MinHeap h(10);
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(5);

    cout << "Min-Heap array: ";
    h.printHeap();

    return 0;
}
