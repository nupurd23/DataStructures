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
Node *rev(Node*head){
    if(head==NULL || head->next ==NULL){
        return head;
    }
    Node *rest_head = rev(head->next);
    Node *rest_tail =head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}
 void print(Node *head){
    Node*curr = head;
    while(curr != NULL){
        cout<<curr->data<<" ";
        curr=curr->next;

    }
    cout<<endl;
 }

 int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next ->next = new Node(30);
    head = rev(head);
    print(head);
    return 0;
 }