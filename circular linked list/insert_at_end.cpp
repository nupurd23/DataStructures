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
Node * insertend(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data=temp->data;
        temp->data = t;
       
    
    return temp;
}
int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    head = insertend(head, 23);
    Node* curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    return 0;
}