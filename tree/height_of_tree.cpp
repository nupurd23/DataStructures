#include<iostream>
#include<algorithm>
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

int height(Node *root){
    if(root == NULL){
        return 0;
    }else{
      return max(height(root->left) , height(root->right))+ 1;
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->right= new Node(40);
    int h = height(root);
    cout<<"The height of tree is "<<h;
    return 0;
}
