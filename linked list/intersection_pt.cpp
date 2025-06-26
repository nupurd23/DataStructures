#include<iostream>
#include<math.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};

Node *intersect(Node *h1 , Node *h2){
    int c1=0,c2=0;
    Node *curr, *curr2;
    for(curr= h1;curr !=NULL;curr=curr->next){
        c1++;
    }
    for(curr2= h2;  curr2 !=NULL; curr2=curr2->next){
        c2++;
    }
    int d = abs(c1-c2);
    Node *ptr1, *ptr2;

if (c1 > c2) {
    ptr1 = h1;
    ptr2 = h2;
} else {
    ptr1 = h2;
    ptr2 = h1;
}
   for(int i = 0; i < d; i++){
        ptr1 = ptr1->next;
   }
      while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1 == ptr2)
            return ptr1; // Intersection point
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return NULL;   
    
}

int main(){
    Node *h1 = new Node(2);
    h1->next = new Node(3);
    Node *temp = new Node(4);
    temp->next = new Node(5);
     h1->next ->next = temp;
    Node *h2 = new Node(4);
    h2->next = temp;
    Node *result = intersect(h1,h2);
     if(result)
        cout << "Intersection at node with data = " << result->data << endl;
    else
        cout << "No intersection found." << endl;
    return 0;
}