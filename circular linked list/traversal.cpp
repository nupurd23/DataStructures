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

void printlist(Node *head){
    if(head==NULL){
        return;
    }
    
        Node *p = head;
    do{
        cout<<p->data<<endl;
        p=p->next;

    }while(p != head);

}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    
    printlist(head);
    return 0;
}