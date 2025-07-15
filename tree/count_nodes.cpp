#include<iostream>
#include<math.h>
using namespace std;

struct Node{
    int key;
    Node *right;
    Node *left;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

int countnodes(Node *root){
    int lh=0,rh=0;
    Node *curr=root;
    while(curr != NULL){
        lh++;
        curr=curr->left;
    }
    curr=root;
    while(curr != NULL){
        rh++;
        curr=curr->right;
    }
    if(lh==rh){
        return pow(2,lh)-1;
    }else{
        return 1+countnodes(root->left) + countnodes(root->right);
    }
}

int main(){
    Node * root = new Node(30);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->right= new Node(40);
    root->right->right = new Node(2);
    root->right->right->right = new Node(21);
    cout<<"the total no of nodes in binary tree are "<<countnodes(root);

    return 0;
}