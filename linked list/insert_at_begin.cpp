#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};

Node *insertbegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}
void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
}

int main(){
    Node *head = NULL;
    head = insertbegin(head , 30);
    head = insertbegin(head,20);
    head = insertbegin(head , 10);
    printlist(head);
    return 0;
}