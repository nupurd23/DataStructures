#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev = NULL;
    Node(int x){
        data=x;
        next=prev = NULL;
    }
};

Node * del_head(Node *head){
   if(head==NULL){
    return head;
   }
   if(head->next == NULL){
    delete(head);
    return NULL;
   }
   else{
    Node *temp = head;
    head= head->next;
    delete(temp);
    return head;
   }
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
    head = del_head(head);
    printlist(head);
  return 0;  

}