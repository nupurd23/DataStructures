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

bool isloop(Node *head){
    Node *slow_p = head;
    Node *fast_p= head;
    while(fast_p != NULL && fast_p->next != NULL){
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if(slow_p == fast_p){
            return true;
        }

    } 
    return false;
}
int main(){
  Node *head = new Node(10);
  head ->next = new Node(20);
  head ->next ->next = new Node(30);
  head ->next ->next->next = head;
  cout<< isloop(head);
  

  return 0;
}