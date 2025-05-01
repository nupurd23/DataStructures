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

struct queue{
    Node *front ,*rear;
    
    queue(){
        front =NULL;
        rear= NULL;
        
    }
    void enqueue(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear= temp;
       
    }
    void dequeue(){
        if(front ==NULL){
            return ;
        }
        Node *temp = front;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete(temp);
        
    }
    void printqueue(){
        Node *curr = front;
        while(curr != NULL){
            cout<<(curr->data)<<" ";
            curr = curr->next;
        }
    }

};


int main(){
    queue q;
    q.enqueue(12);
    q.enqueue(14);
   q.dequeue();
   q.enqueue(23);
   q.printqueue();
   return 0;

}