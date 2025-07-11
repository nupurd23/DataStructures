#include<iostream>
using namespace std;

struct Node{
  Node *left;
  Node * right;
  int key;
  Node(int x){
    key =x;
    left=right= NULL;
  }
};

bool Csum(Node *root){
   if(root==NULL){
    return true;
   }
   if(root->left ==NULL && root->right == NULL){
     return true;
   }
   int sum = 0;
   if(root->left != NULL){
    sum += root->left->key;
   }
   if(root->right != NULL){
    sum +=root->right->key;
   }
   return(root->key == sum && Csum(root->left) && Csum(root->right));
}

int main(){
     Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(1);
    root->right->right = new Node(8);

    cout<<Csum(root);

    return 0;
}