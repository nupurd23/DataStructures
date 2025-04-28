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

Node* delete_head(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == head){
        delete(head);
        return NULL;
    }
    head->data= head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    delete_head(head);
    cout<<head->data;
    return 0;
}