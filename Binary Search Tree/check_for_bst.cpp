#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left , *right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};

int prev = INT_MIN;

bool isbst(Node *root, int &prev){
   if(root==NULL) return true;
   if(isbst(root->left , prev)==false) return false;
   if(root->key <= prev) return false;
   prev = root->key;
   return isbst(root->right, prev);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    int prev = INT_MIN;
    if (isbst(root, prev))
        cout << "BST\n";
    else
        cout << "Not a BST\n";
    return 0;
}
