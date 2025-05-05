#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        prev=next = NULL;
    }
};
Node *insert_end(Node *head, int x){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    Node*curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev = curr;
    return head;
}
void printlist(Node *head){
    Node *curr = head;
    while(curr !=NULL){
        cout<<curr->data <<" ";
        curr=curr->next;
    }
}
int main(){
    Node *head= NULL;
    head = insert_end(head,10);
    head = insert_end(head , 20);
    printlist(head);

    return 0;
}