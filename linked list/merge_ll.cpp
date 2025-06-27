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

Node *sortedmerge(Node *a , Node *b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    Node *head = NULL , *tail = NULL;
    if(a->data < b->data){
        head = tail =a;
        a=a->next;
    }else{
        head= tail =b;
        b=b->next;
    }
    while(a !=NULL && b != NULL){
        if(a->data <= b->data){
            tail->next = a;
            tail= a;
            a=a->next;
        }else{
            tail->next =b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL){
        tail->next =b;
    }else{
        tail->next =a;
    }

    return head;
}

void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
}

int main(){
    Node *a= new Node(2);
    a->next = new Node(4);
    a->next->next = new Node(6);
    Node *b = new Node(1);
    b->next = new Node(3);
    b->next->next = new Node(5);
    Node *head= sortedmerge(a,b);
    printlist(head);

    return 0;
}