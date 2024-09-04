// BINARY TREE USING QUEUE DATASTRUCTURE
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node * left,*right;

// Constructor
Node(int val){
    data = val;
    left = NULL;
    right = NULL;
}

};

int main(){
queue<Node *>q;

// creating the root node;
int x;
cout<<"Enter the root node ";
cin>>x;
Node* root = new Node(x);
Node * temp= root;
q.push(root);

while(!q.empty()){
// poped out the node from queue and ask wheather you want tot create the left child of that node;
//  if yes
temp = q.front();
q.pop();

cout<<"Enter the left child of "<<temp->data<<" : ";
cin>>x;
if(x!=-1){   // want to create left child
temp->left = new Node(x);
q.push(temp->left);
}

// will you want to create right child  if yes, 
cout<<"Enter the right child of "<<temp->data<<" : ";
cin>>x;
if(x!=-1){
temp->right = new Node(x);
q.push(temp->right);
}
}

    return 0;
}