#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev= NULL;
        next = NULL;
    }

};
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
    printlist(head);
  return 0;  

}