#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left, *right;
    Node(int x){
        key=x;
        left=right= NULL;
    }
};

Node *floor(Node *root , int x){
    Node *res= NULL;
    while(root !=NULL){
        if(root->key==x){
            return root;
        }else if(root->key > x){
            root=root->left;
        }else{
            res=root;
            root = root->right;
        }
    }
    return res;
}
int main(){
    Node *root = new Node(20);
    root->left=new Node(12);
    root->right = new Node(30);
    root->left->left = new Node(10);
    Node* res = floor(root, 11);
    if (res != NULL)
    cout << "Floor value: " << res->key << endl;
    else
    cout << "Floor doesn't exist\n";

    return 0;
}