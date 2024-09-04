// #include<iostream>
// #include<vector>
// using namespace std;

//   struct ListNode {
//       int val;
//       ListNode *next;
//       ListNode() : val(0), next(nullptr) {}
//       ListNode(int x) : val(x), next(nullptr) {}
//       ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

// class Solution {
// public:
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         struct ListNode* prev;
//         struct ListNode* temp;
//         prev = head;
//         temp = prev;
//         int length = nums.size();
//         for(int i=0;i<=length;i++){
//             // traverse the linked list to serach nums[i] in it .
//             while(temp!=NULL){
//                 if(nums[i]==head->val){
//                     // delete the first node.
//                 prev = prev->next;
//                 temp = prev;
//                 head = prev;
//                 break;
//                 }
//                 else if(temp->val == nums[i] ){
//                     prev->next = temp->next;
//                     temp = temp->next;

//                 }
//                 else{
//                     prev = temp;
//                     temp=temp->next;
//                 }

//             }
//         }
//             return head;
//         }

// };

// int main(){

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *head = NULL;

node *createNode(node *temp)
{
    node *ptr = new node();
    int data;
    cout << "enter data : ";
    cin >> ptr->data;
    ptr->next = NULL;
    if (temp == NULL)
    {
        return ptr;
    }
    temp->next = ptr;
    return ptr;
}

void display(node *temp)
{
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            cout << temp->data;
            return;
        }
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

 void modifiedList(vector<int> &nums, node *head)
{
    node *prev;
    node *temp;
   
    int length = nums.size();
    for (int i = 0; i <= length-1; i++)
    {
        // traverse the linked list to serach nums[i] in it .
     prev = head;
    temp = prev;
        while (temp != NULL)
     
        {
            if (nums[i] == head->data)
            {
                // delete the first node.
                prev = prev->next;
                temp = prev;
                head = prev;
                // break;
            }
            else if (temp->data == nums[i])
            {
                prev->next = temp->next;
                temp = temp->next;
                // break;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
    }
    cout<<"resultant linked list";
    display(head);
}

int main()
{
    node *node1, *node2, *node3, *node4, *node5, *node6;
    head = createNode(head);
    node1 = createNode(head);
    node2 = createNode(node1);
    node3 = createNode(node2);
    node4 = createNode(node3);
    // node5 = createNode(node4);
    // node6 = createNode(node5);

    display(head);
    cout << endl;
    vector<int> arr;
    int size;
    cout << "Enter the size of the array;";
    cin >> size;
    for (int i = 0; i <=size - 1; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
modifiedList(arr,head);
    return 0;
}
