#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next =NULL;
    }
};

Node *seggregate(Node *head){
    Node *eS = NULL , *eE = NULL , *oS = NULL , *oE= NULL;
    for( Node *curr = head ; curr != NULL; curr= curr->next){
        int x= curr->data;
        if(x %2 ==0){
            if(eS== NULL){
            eS= curr;
            eE= eS;
            }else{
                eE->next = curr;
                eE = eE->next;
            }
        }else{
            if(oS == NULL){
                oS = curr;
                oE = oS;
            }else{
                oE->next = curr;
                oE= oE->next; 
            }
        }
    }
    if(oS == NULL || eS== NULL){
        return NULL;
    }else{
        eE->next = oS;
        oE->next = NULL;
    }
    return eS;

}
void printlist(Node *head){
    Node *curr= head;
    while(curr != NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main(){
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    head= seggregate(head);
    printlist(head);

    return 0;
}