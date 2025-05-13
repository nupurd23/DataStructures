#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

// inorder traversal
void inorder(Node *root){
    if(root != NULL){
        
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);

    }
}
// preorder traversal
void preorder(Node *root){
    if(root != NULL){
        
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);

    }
}
// postorder traversal
void postorder(Node *root){
    if(root != NULL){
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";

    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->right= new Node(40);
    cout<<"inorder traversal ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal ";
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal ";
    postorder(root);

    return 0;
}