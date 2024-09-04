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

int findMiddle(node * &head){
    int length=0;
    node * temp;
    temp= head;
    while(temp!=NULL){
        length++;
        temp= temp->next;
    }
    int middle = length/2 + 1;
    temp=head;
    for(int i=0;i<middle-1;i++){
         temp=temp->next;
    }
    return temp->data;
}
void deletMiddleNode(){
    node * temp= head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    int middle = count/2;
    temp = head;
   for(int i=0;i<middle-1;i++){
       temp = temp->next;
   }
   temp->next= temp->next->next;

   display(head);
    
}

int main(){
    node *node1,*node2,*node3,*node4,*node5,*node6;
  head=  createNode(head);
  node1= createNode(head);
//   node2=createNode(node1);
//   node3=createNode(node2);
//   node4=createNode(node3);
//   node5=createNode(node4);
//   node6=createNode(node5);

 display(head);
 cout<<endl;
 int result = findMiddle(head);
 cout<<"middle node = "<<result;
 cout<<endl;
 deletMiddleNode();
    return 0;
}

