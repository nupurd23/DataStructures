#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key = x;
        left=right=NULL;
    }
};



void spiraltraversal(Node *root){

    if (root == NULL) return;

    stack<Node*>s1;
    stack<Node*>s2;

   s1.push(root);
    while (!s1.empty() || !s2.empty()) {
   while(s1.empty()==false){
    Node* temp= s1.top();
    s1.pop();
    cout<<temp->key<<" ";

    
    if (temp->right) s2.push(temp->right);
    if (temp->left) s2.push(temp->left);
    
   }
    while(s2.empty()==false){
    Node * temp= s2.top();
    s2.pop();
    cout<<temp->key<<" ";
    
    if (temp->left) s1.push(temp->left);
    if (temp->right) s1.push(temp->right);
   }
}
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Spiral Order Traversal: ";
    spiraltraversal(root);
    cout << endl;

    return 0;
}