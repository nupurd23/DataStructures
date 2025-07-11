#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key=x;
        right=left = NULL;
    }
};

int isbalanced(Node *root){
  if(root==NULL){
    return 0;
  }
  int lh = isbalanced(root->left);
  if(lh==-1){
    return -1;
  }
  int rh = isbalanced(root->right);
  if(rh==-1){
    return -1;
  }
  if(abs(lh-rh)>1){
    return -1;
  }else{
    return max(lh,rh)+1;
  }
}
int main(){
     Node *root = new Node(10);
    root->left = new Node(2);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(1);
    root->right->right = new Node(8);

    int result = isbalanced(root);
    if(result == -1){
    cout << "Tree is not balanced";

    }else{
    cout << "Tree is balanced with height: " << result;
    }
    return 0;
}