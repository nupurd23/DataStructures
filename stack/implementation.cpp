#include<iostream>
#include<climits>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};
struct MyStack{
    Node *head;
    int sz;
    MyStack(){
        head= NULL;
        sz=0;
    }

    void push(int x){
        Node *temp = new Node(x);
        temp->next = head;
        head= temp;
        sz++;
    }
    int pop(){
        if(head==NULL){
            return INT_MAX;
        }
        int res = head->data;
        Node*temp = head;
        head = head->next;
        delete(temp);
        sz--;
        return res;

    }
    int size(){
        return sz;
    }
    bool isEmpty(){
        return (head==NULL);
    }
    int peek(){
        if(head==NULL){
            return INT_MAX;
        }
        return head->data;
    }

};
void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
}

int main() {
    MyStack s;  // Create a stack object

    // Push elements into the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Display top element
    cout << "Top element is: " << s.peek() << endl;

    // Pop an element
    cout << "Popped: " << s.pop() << endl;

    // Size after pop
    cout << "Size of stack: " << s.size() << endl;

    // Check if stack is empty
    if (s.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}
