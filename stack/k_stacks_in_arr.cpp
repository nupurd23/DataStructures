// C++ program to implement k stacks in an array.
#include <bits/stdc++.h>
using namespace std;
class kStacks {
private:
    vector<int> arr;   
    int n, k;          
    vector<int> top;   
    vector<int> next;  
    int freeIndex;          
public: 

    // Constructor to initialize kStacks
    kStacks(int n, int k) {
        this->n = n;
        this->k = k;
        arr.resize(n);
        top.resize(k, -1);
        next.resize(n);
        
        // Initialize all spaces as free
        freeIndex = 0;
        for (int i = 0; i < n-1; i++)
            next[i] = i + 1;
            
        // -1 is used to indicate end of free list
        next[n-1] = -1;  
    }
    
    // Function to push element x into
    // m'th stack
    bool push(int x, int m) {
        
        // Check if we have space for a new element
        if (freeIndex == -1) {
            return false;  
        }
        
        // Store index of first free slot
        int i = freeIndex;
        
        // Update free to point to next slot in free list
        freeIndex = next[i];
        
        // Update next of top and then top for stack m
        next[i] = top[m];
        top[m] = i;
        
        // Store the item in array
        arr[i] = x;
        
        return true;
    }
    
    // Function to pop top element from 
    // m'th stack.
    int pop(int m) {
        
        // Check if stack is empty
        if (top[m] == -1) {
            return -1;  
        }
        
        // Find index of top item in stack m
        int i = top[m];
        
        // Update top of stack m
        top[m] = next[i];
        
        // Add the previous top to free list
        next[i] = freeIndex;
        freeIndex = i;
        
        // Return the popped element
        return arr[i];
    }
};

int main() {
    int n = 5, k = 4;
    kStacks* s = new kStacks(n, k);
    
    // Each query is of either 2 types
    // 1: Push operation -> {1, x, m}
    // 2: Pop operation -> {2, m}
    vector<vector<int>> queries = {
        {1, 15, 0},  
        {1, 25, 1},  
        {1, 35, 2},  
        {1, 45, 3},  
        {1, 55, 0},
        {2, 0},     
        {2, 1},     
        {1, 55, 0},  
        {2, 3}      
    };
    
    for (auto q: queries) {
        
        if (q[0] == 1) {
            if (s->push(q[1], q[2])) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        else {
            cout << s->pop(q[1]) << " ";
        }
    }
    return 0;
}