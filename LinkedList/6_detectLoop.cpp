#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node * head=NULL;

node * createNode(node * temp){
    node * ptr = new node();
    int data;
    cout<<"enter data : ";
    cin>>ptr->data;
    // cin>>data;
    // ptr->data=data;
    ptr->next=NULL;

    if(temp==NULL){
    
        return ptr;
    }

    temp->next=ptr;
    return ptr;
}

void display(node * temp){

    while(temp!=NULL){
        if(temp->next==NULL){
            cout<<temp->data;
            return ;
        }
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}

bool detectLoop(node * head){
    // if(head==NULL){
    //     return false;
    // }
node * slow, * fast;
slow= head;
fast= head;
while(fast && fast->next){
    fast= fast->next->next;
    slow = slow->next;
    if(fast==slow){
        return true;
    }
}
return false;
}

void tracktraversing(node * head){
    node * fast = head;
    while(fast!=NULL){
        cout<<fast<<"\t";
        fast= fast->next->next; 
    }
}

void countLength(node * head){
node * slow, * fast,*start;
slow= head;
fast= head;
int len = 0;
while(fast && fast->next){
    fast= fast->next->next;
    slow = slow->next;
    if(fast==slow){
        start=fast;
         slow = start->next;
         len=1;
         break;
    }
}
 while(start!=slow){
  len++;
  slow= slow->next;
 }
 cout<<"Length of loop is : "<<len;
}

int main(){
    node *node1,*node2,*node3,*node4,*node5,*node6;
  head=  createNode(head);
  node1= createNode(head);
//   node1->next=head;
  node2=createNode(node1);
  node3=createNode(node2);
  node4=createNode(node3);
  node5=createNode(node4);
  node6=createNode(node5);
  node6->next=node3;

//   cout<<head<<"\t"<<node1<<"\t"<<node2<<"\t"<<node3<<"\t"<<node4<<"\t"<<node5;

//  display(head);         //this loop[ will run infinitely

 cout<<endl;
int result =  detectLoop(head);
if(result ==1){
    cout<<"linked list contain loop .";
}
else{
    cout<<"linked list doesnot contain loop";
}

countLength(head);
// tracktraversing(head);

/*
cout<<node6<<endl;
cout<<node6->data<<endl;
cout<<node6->next<<endl;
cout<<node6->next->next<<endl;
*/

    return 0;
}


/*
    Time complexity: O(n)
    Space complexity: O(1)

    Where 'n' is the size of the linked list.
*/

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

// int lengthOfLoop(Node *head)
// {
//     Node *slow = head, *fast = head;

//     //Cycle detection
//     while (slow -> next != NULL && fast -> next != NULL && fast -> next -> next != NULL) {
//         slow = slow -> next;
//         fast = fast -> next -> next;

//         if (fast == slow)
//             break;
//     }

//     if (slow -> next == NULL || fast -> next == NULL || fast -> next -> next == NULL)
//         return 0;

//     // Cycle exists. Finding it's length
//     int length = 0;
//     do {
//         fast = fast -> next;
//         length++;
//     } while (fast != slow);

//     return length;
// }
