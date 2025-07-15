#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key=x;
        left=right=NULL;
    }
};

Node *lca(Node *root, int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->key == n1 || root->key==n2){
        return root;
    }
    Node *lca1 = lca(root->left,n1,n2);
    Node *lca2 = lca(root->right , n1,n2);
    if(lca1 !=NULL && lca2 !=NULL){
        return root;
    }
    if(lca1 != NULL){
        return lca1;
    }else{
        return lca2;
    }
}

int main(){
    Node * root = new Node(30);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->right= new Node(40);
    root->right->right = new Node(2);
    root->right->right->left = new Node(200);
    root->right->right->right = new Node(21);
    cout<< lca(root,200,21)->key;
    return 0;

}