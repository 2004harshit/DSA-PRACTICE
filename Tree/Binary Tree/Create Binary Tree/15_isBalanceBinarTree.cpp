#include <bits/stdc++.h>
using namespace std;

// METHOD 1
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int getHeight(Node *root){
    if(root ==NULL){
        return 0;
    }
    int left = getHeight(root->left);
    int right = getHeight(root->right);
    return 1+max(left,right);
}

bool isBalanced(Node * root){
    if(root==NULL)return true;

    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    if(abs(lh-rh)>1)return false;

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    if(!left || !right)return false;
    return true;
}

int main()
{

    Node *root = new Node(0);
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);
    Node *node6 = new Node(6);
    Node *node7 = new Node(7);
    Node *node8 = new Node(8);

    // joing the nodes
    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    // node2->right = node5;
    node4->left = node6;
    // node4->right = node7;
    // root = NULL;
   cout<<isBalanced(root);
    return 0;
}