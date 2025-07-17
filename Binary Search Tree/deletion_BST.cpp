#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left , *right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};

Node *getsuccessor(Node *curr){
    curr= curr->right;
    while(curr !=NULL && curr->left !=NULL){
        curr=curr->left;
    }
    return curr;
}
Node *delnode(Node *root,int x){
    if(root==NULL)return root;
    if(root->key > x){
        root->left = delnode(root->left,x);
    }else if(root->key < x){
        root->right = delnode(root->right , x);
    }
    else{
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }else{
            Node *succ = getsuccessor(root);
            root->key = succ->key;
            root->right = delnode(root->right , succ->key);
        }
    }
    return root;
}

int main(){
   Node *root = new Node(20);
    root->left=new Node(12);
    root->right = new Node(30);
    root =delnode(root , 20); 
    cout<<root->key;
    return 0;
}