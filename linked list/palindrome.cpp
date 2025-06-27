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

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

bool ispalindrome(Node *head){
    if(head==NULL){
        return true;
    }
    Node *slow=head, *fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *rev = reverseList(slow->next);
    Node *curr = head;
    while(rev != NULL){
        if(rev->data != curr->data){
            return false;
        }
        rev=rev->next;
        curr=curr->next;
    }
    return true;

}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);

    if (ispalindrome(head))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
