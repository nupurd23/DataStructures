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

int detect_remove(Node *head){
    if(head->next == head){
        head->next= NULL;
        return 0;
    }
    Node *slow_p = head;
    Node *fast_p = head;
    while( fast_p !=NULL && fast_p ->next!=NULL){
        slow_p= slow_p->next;
        fast_p= fast_p->next->next;
        if(slow_p == fast_p){
            break;
        }
    }
    if(slow_p != fast_p){
        return 1;
    }
    slow_p=head;
    while(slow_p->next != fast_p->next){
        slow_p= slow_p->next;
        fast_p=fast_p->next;
    }
    fast_p->next= NULL;
    return 0;
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
  head ->next ->next->next = head;

  detect_remove(head);
  printlist(head);
  

  return 0;
}