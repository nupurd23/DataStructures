#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left , * right;
    Node(int x){
        key=x;
        left=right = NULL;
    }
};

Node *ceil(Node *root , int x){
     Node *res= NULL;
     while(root !=NULL){
        if(root->key== x){
            return root;
        }else if(root->key < x){
            root= root->right;
        }else{
            res= root;
            root = root->left;
        }
     }
     return res;
}

int main(){
    Node *root = new Node(20);
    root->left=new Node(12);
    root->right = new Node(30);
    root->left->left = new Node(10);
    Node* res = ceil(root, 11);
    if (res != NULL)
    cout << "Ceil value: " << res->key << endl;
    else
    cout << "Ceil doesn't exist\n";

    return 0;
}