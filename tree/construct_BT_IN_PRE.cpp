//construct binary tree from inorder and preorder

#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key =x;
        left=right=NULL;
    }
};

int preIndex=0;
Node *ctree(int in[] , int pre[] , int is , int ie){
    if(is>ie){
        return NULL;
    }
    Node *root = new Node(pre[preIndex++]);
    int inIndex;
    for(int i = is;i<=ie;i++){
        if(in[i]==root->key){
            inIndex=i;
            break;
        }
    }
    root->left= ctree(in , pre,is , inIndex-1);
    root->right = ctree(in , pre ,inIndex+1,ie);
    return root;
}

void printInorder(Node* root) {
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->key << " ";
    printInorder(root->right);
}

int main(){
    int in[]={40,20,60,50,70,10,80,100,30};
    int pre[]={10,20,40,50,60,70,30,80,100};
    int n = sizeof(in) / sizeof(in[0]);

    Node* root = ctree(in, pre, 0, n - 1);

    cout << "Inorder traversal of the constructed tree: ";
    printInorder(root);
    cout << endl;

    return 0;
}