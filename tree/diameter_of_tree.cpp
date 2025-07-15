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

int res=0;
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    res= max(res,lh+rh+1);

    return 1+max(lh,rh);
}
int main(){
    Node * root = new Node(30);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->right= new Node(40);
    root->right->right = new Node(2);
    root->right->right->right = new Node(21);
    int h = height(root);
    cout<<"The diameter of tree is "<<h;
    return 0;
}