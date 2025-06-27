#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *random;
      Node(int val) {
        data = val;
        next = NULL;
        random = NULL;
    }
};

Node *clone(Node *head){
    if (head == NULL) return NULL;
     Node *curr = head;
    while (curr != NULL) {
        Node *next = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = next;
        curr = next;
    }
      // Step 2: Assign random pointers for the cloned nodes
    curr = head;
    while (curr != NULL) {
        if (curr->random)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }
    // Step 3: Separate the cloned list from the original list
    curr = head;
    Node *cloneHead = head->next;
    Node *cloneCurr = cloneHead;

    while (curr != NULL) {
        curr->next = curr->next->next;
        if (cloneCurr->next)
            cloneCurr->next = cloneCurr->next->next;
        curr = curr->next;
        cloneCurr = cloneCurr->next;
    }

    return cloneHead;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Setting random pointers
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next;

    Node *cloned = clone(head);

    // Output to verify cloning
    Node *temp = cloned;
    while (temp != NULL) {
        cout << "Data: " << temp->data;
        if (temp->random)
            cout << ", Random: " << temp->random->data << endl;
        else
            cout << ", Random: NULL" << endl;
        temp = temp->next;
    }

    return 0;
}
