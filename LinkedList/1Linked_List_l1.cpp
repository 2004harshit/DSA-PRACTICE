//  creating a linked list
#include<iostream>
using namespace std;

class node{
public:
int data ;
node * next;
public : 
// node(int value,node * ptr){
//     data=value;
//     next=ptr;
// }

};
node * head=NULL;

void create(node * &head,int len){
    node * temp,* ptr;
    int value;
   for(int i=0;i<len;i++){ 
    if(head==NULL){
        head=new node();
        head->next= NULL;
        cout<<"enter the value : "<<endl;
        cin>>value;
        head->data= value;
        ptr= head;

    }

    else{
        temp= new node();
        temp->next= NULL;
        cout<<"enter the value : "<<endl;
        cin>>value;
        temp->data= value;
        ptr->next= temp;
        ptr= temp;

    }
    }
}

void display(node * &temp){
    while(temp!=NULL){

        if(temp->next==NULL){
            cout<<temp->data;
            break;
        }
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}

int main(){

   create(head,5);
   display(head);
    return 0;
}