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

bool detect_loop(Node *head){
    Node *temp = new Node(-1);
    Node *curr = head;
    while(curr != NULL){
        if(curr->next == NULL){
           return false;
        }
        if(curr->next==temp){
            return true;
        }
        Node *next_node = curr->next;
        curr->next = temp;
        curr=next_node;
    }
    return false;
}

int main(){
  Node *head = new Node(10);
  head ->next = new Node(20);
  head ->next ->next = new Node(30);
  head ->next ->next->next = head;
  cout<< detect_loop(head);
  

  return 0;
}