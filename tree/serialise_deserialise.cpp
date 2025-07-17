#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

const int EMPTY = -1;
void serialise(Node *root , vector<int>&arr){
   if(root==NULL){
    arr.push_back(EMPTY);
    return;
   }
   arr.push_back(root->data);
   serialise(root->left, arr);
   serialise(root->right,arr);
}

int index= 0;
Node *deserialise(vector<int>&arr){
    if(index==arr.size()){
        return NULL;
    }
    int val = arr[index];
    index++;
    if(val==EMPTY)return NULL;
    Node *root = new Node(val);
    root->left = deserialise(arr);
    root->right = deserialise(arr);

    return root;
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);

    vector<int> arr;
    serialise(root, arr);

    cout << "Serialized: ";
    for (int val : arr) cout << val << " ";
    cout << endl;

    int index = 0;
    Node* deserializedRoot = deserialise(arr);

    cout << "Inorder of Deserialized Tree: ";
    inorder(deserializedRoot);
    cout << endl;

    return 0;
}
