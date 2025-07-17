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

Node *insert(Node *root , int x){
    if(root==NULL){
        return new Node(x);
    }else if(root->key <x){
        root->right = insert(root->right , x);
    }else if(root->key>x){
        root->left= insert(root->left ,x);
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

int main(){
    Node *root = new Node(20);
    root->left=new Node(12);
    root->right = new Node(30);
    root =insert(root , 2);
    cout << "Inorder Traversal after insertion: ";
    inorder(root);  // Should print: 2 12 20 30
    cout << endl;

    return 0;
}