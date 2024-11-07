#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node * left;
    Node *right;
    Node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

int main(int argc, char const *argv[])
{
    Node * root = new Node(3);
    cout<<"root->val = "<<root->val<<endl;
    cout<<"root->left  = "<<root->left<<endl;
    cout<<"root->right = "<<root->right<<endl;
    return 0;
}
