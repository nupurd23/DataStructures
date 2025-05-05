#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = prev = NULL;
    }
};
Node *insert_begin(Node *head , int x){
    Node *temp3 = new Node(x);
    temp3->next = head;
    if(head != NULL){
        head->prev = temp3;
    }
    return temp3;
}
void printlist(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data <<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = new Node(1);
    Node *temp = new Node(2);
    Node *temp2= new Node(3);
    head->next = temp;
    temp->next = temp2;
    temp->prev = head;
    temp2->prev = temp;
    head = insert_begin(head,34);
    printlist(head);
  return 0;  

}