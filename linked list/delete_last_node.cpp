#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *dellast(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
   
        Node *curr = head;
        while(curr->next->next != NULL){
            curr= curr->next;
        }
        delete(curr->next);
        curr->next = NULL;
        
    return head;
}
int main(){
   Node *head = new Node(10);
   head->next = new Node(20);
   head->next->next = new Node(30);
   dellast(head);
   cout<<(head->data)<<" ";
   cout<<(head->next->data)<<" ";
   cout<<(head->next->next->data);
}