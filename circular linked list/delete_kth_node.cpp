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

Node* delete_head(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next == head){
        delete(head);
        return NULL;
    }
    head->data= head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}
Node* delete_kth(Node *head , int k){
 if (head== NULL){
    return head;
 }
 if(k==1){
    return delete_head(head);
 }
 Node *curr = head;
 for(int i =0;i<k-2;i++){
    curr=curr->next;
 }
 Node *temp= curr->next;
 curr->next = curr->next->next;
 delete temp;
 return head;
}
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
    head->next= new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    delete_kth(head, 2);
    printlist(head);
    return 0;
}