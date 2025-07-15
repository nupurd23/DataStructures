#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

int res=0;
int burntime(Node *root , int leaf,int &dist){
    if(root==NULL){
        return 0;
    }
    if(root->data==leaf){
       dist =0;
       return 1;
    }
    int ldist =-1, rdist=-1;
    int lh= burntime(root->left,leaf,ldist);
    int rh = burntime(root->right , leaf, rdist);
    if(ldist !=-1){
        dist= ldist +1;
        res= max(res,dist+rh);
    }else if(rdist !=-1){
        dist=rdist+1;
        res= max(res , dist+lh);
    }
    return max(lh,rh)+1;
}
int main(){
     Node * root = new Node(30);
    root->left = new Node(20);
    root->left->left = new Node(30);
    root->right= new Node(40);
    root->right->right = new Node(2);
    root->right->right->left = new Node(200);
    root->right->right->right = new Node(21);
    
    int dist = -1;
    cout<<burntime(root,21 ,dist);
}