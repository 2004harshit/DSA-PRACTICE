#include <bits/stdc++.h>
using namespace std;

// METHOD 1
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> InOrder(Node *root,vector<int>ans){
    if(root==NULL){
        ans.push_back(-1);
        return ans;
    }
     ans=InOrder(root->left,ans);
     ans.push_back(root->data);
     ans=InOrder(root->right,ans);
     return ans;
}

void Inorder(Node *root){
    if(root==NULL){
        cout<<-1;
        return;
    }
    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}
class Solution
{
    public:
    //Function to check if two trees are identical.
     bool isIdentical(Node *r1, Node *r2)
    {
    if(r1==NULL && r2==NULL){
        return true;
    }
       vector<int>t1,t2;
       t1= InOrder(r1,t1);
       t2=InOrder(r2,t2);
       int l1,l2;
    //    bool result=true;
       l1=t1.size()-1;
       l2=t2.size()-1;
    //    while(l1 &l2){
    //        if(t1[l1]!=t2[l2]){
    //            result = false;
    //            return result;
    //        }
    //        l1--;
    //        l2--;
    //    }
    //    return result;
    cout<<"content of t1 : ";
for(int i=0;i<=l1;i++){
    cout<<t1[i]<<" ";
}
cout<<endl;
    cout<<"content of t2 : ";
for(int i=0;i<=l2;i++){
    cout<<t2[i]<<" ";
}

    return t1==t2;
    }
};

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

vector<int>checkIdentical_tree(Node * root, vector<int>result){
    if(root ==NULL){
        result.push_back(-1);
        return result;
    }
    result = checkIdentical_tree(root->left,result);
    result.push_back(root->data);
    result = checkIdentical_tree(root->right,result);
    return result;
}

int main()
{
string str, str1;
        getline(cin, str);
        Node *rootA = buildTree(str);
        getline(cin, str1);
        Node *rootB = buildTree(str1);
        Solution ob;
        if (ob.isIdentical(rootA, rootB)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
        
    // Inorder(rootA);
    // cout<<endl;
    // Inorder(rootB);
        
    
    return 0;
}


//{ Driver Code Starts



// } Driver Code Ends
/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


   



