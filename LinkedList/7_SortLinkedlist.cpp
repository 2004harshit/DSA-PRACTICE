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

void sortLinkedlist(node * head){
    int len=0;
        node * temp,* temp1;
        temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        cout<<"length = "<<len<<endl;

        for(int i=0;i<=len;i++){
        temp =head;
        int x;
        temp1= temp->next;
           for(int j=0;j<len-1;j++){
               if(temp->data > temp1->data){
                 x= temp->data;
                 temp->data = temp1->data;
                 temp1->data= x;
               }
               else{
                temp = temp->next;
                temp1= temp1->next;
               }
           }
        }
        display(head);
        
}

int main(){
    node *node1,*node2,*node3,*node4,*node5,*node6;
  head=  createNode(head);
  node1= createNode(head);
  node2=createNode(node1);
  node3=createNode(node2);
  node4=createNode(node3);
  node5=createNode(node4);
  node6=createNode(node5);




 display(head);         
 cout<<endl;
 sortLinkedlist(head);

    return 0;
}
