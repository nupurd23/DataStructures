#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next = NULL;
    }
};
void pairwise_swap(Node *head){
    Node *curr = head;
   while(curr != NULL && curr->next != NULL){
     swap(curr->data , curr->next->data);
     curr=curr->next->next;
   }
}

void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
}
int main(){
  Node *head = new Node(10);
  head ->next = new Node(20);
  head ->next ->next = new Node(30);
  head ->next ->next->next = new Node(40);
  pairwise_swap(head);
  printlist(head);

  return 0;
}