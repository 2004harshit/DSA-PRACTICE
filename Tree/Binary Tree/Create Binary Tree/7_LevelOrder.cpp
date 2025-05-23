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

// left right node
void LevelOrder(Node * root){
queue<Node*>q;
// cout<<root->data;
q.push(root);
while(!q.empty()){
    cout<<q.front()->data<<" ";
    q.push(q.front()->left);
    q.push(q.front()->right);
    q.pop();
}

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

    // joing the nodes
    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = node5;
    node2->right = node6;
    LevelOrder(root);
    return 0;
}