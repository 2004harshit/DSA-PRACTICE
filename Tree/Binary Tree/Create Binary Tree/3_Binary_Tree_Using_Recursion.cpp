#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node * left, * right;
   friend Node * CreateTree(Node * root);
    Node(int val){
        data= val;
        left = NULL;
        right = NULL;
    }
};

Node * CreateTree(Node * root){
    int x;
    cout<<"Enter the value of the  node  : ";
    cin>>x;
    if(x==-1){
        return NULL;
    }
    root = new Node(x);
    root->left=CreateTree(root->left);
    root->right=CreateTree(root->right);
    return root;
}

int main(){
Node * root=CreateTree(root);
cout<<root->data;
cout<<root;
return 0;
}