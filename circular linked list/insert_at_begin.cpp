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

Node* insertbegin(Node *head , int x){
  Node *temp = new Node(x);
  if(head == NULL){
    temp->next = temp;
    return temp;
  }else{
    temp->next = head->next;//head k aage temp insert krva diya aur fir temp aur head ka data swap krva diya
    head->next = temp;
    int t = head->data;
    head->data = temp->data;
    temp->data= t;
  }
return temp;
}

int main(){
    Node *head = new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    insertbegin(head,24);
    cout<<head->data;
    return 0;
}