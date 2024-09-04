#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // Node(int n){
  //     data = n;
  //     next=nullptr;
  // }
};

Node *head = NULL;

void display(Node * temp){
  while (temp != NULL) {
          if(temp->next==NULL){
               cout<<temp->data<<endl;
               break;
           }
          cout << temp->data << " -> ";
          temp = temp->next;

  }
}




void cerateLinkedlist(Node * &head, int len){
        Node *temp, *ptr;
        int value;
        for (int i = 1; i <= len; i++) {
            temp = new Node();
          if (head == NULL){

              cout << "Enter the value  :";
              cin >> value;
              temp->data = value;
              temp->next = NULL;
              head = temp;
              ptr = head;
            }
    else
    {
     
      cout << "Enter the value  :";
      cin >> value;
      temp->data = value;
      temp->next = NULL;
      ptr->next = temp;
      ptr = temp;
    }
  }
  cout<<"Linked List Successfully Created !"<<endl;
  display(head);
}


void insert(Node *&head, int choice)
{
  //     if choice ===1 begning
  Node *temp;
  int value;

  if (choice == 1)
  {

    if (head == NULL)
    {
      temp = new Node();
      cout << "Enter the value which you want to insert : ";
      cin >> value;
      temp->data = value;
      temp->next = NULL;
      head = temp;
    }
    else
    {
      temp = new Node();
      cout << "Enter the value which you want to insert : ";
      cin >> value;
      temp->data = value;
      temp->next = head;
      head = temp;
    }

    //   display the linked list
    display(head);
  }

  //    if choice4 ==2  middle
  else if (choice == 2)
  {
    // check whether head exists or not
    if (head == NULL)
    {
      cout << "Linked List does not exists so cannot insert a node at any position "<<endl;
      int x;
      cout<<"------------------------------------------------"<<endl;
      cout << "Press 1 to create Linked List : " << endl;
      cout << "Press 0 for exit : " << endl;
      cin >> x;
      // creating a linked list
      if (x == 1)
      {
        int len;
        cout << "enter the length of the linked list : "<<endl;
        cin >> len;
        cerateLinkedlist(head, len);
        cout<<"Will you want to insert node at any position ,if yes press 1 else press 0"<<endl;
        cin>>x;
        if(x==0){
          return ;
        }
      }

      else
      {
        return;
      }

    }
    int position;
    cout << "Enter the position where  you want to insert the node : "<<endl;
    cin >> position;
    Node *ptr = head;
    for (int i = 1; i <position - 1; i++)
    {

      ptr = ptr->next;
      if(ptr==NULL){
        cout<<"position out of bound"<<endl;
        return;
      }
    }
    temp = new Node();
    cout << "Enter the value which you want to insert : "<<endl;
    cin >> value;
    temp->data = value;
    temp->next = ptr->next;
    ptr->next = temp;
    //  display the linked list
    display(head);
  }

  //   if choice == 3 end
  else
  {
    if (head == NULL)
    {
      cout << "Linked List does not exists so cannot insert a node at any position ";
      int x;
      cout << "Press 1 to create Linked List : " << endl;
      cout << "Press 0 for exit : " << endl;
      cin >> x;
      if (x == 1)
      {
        int len;
        cout << "enter the length of the linked list : ";
        cin >> len;
        cerateLinkedlist(head, len);
         cout<<"Will you want to insert node at end ,if yes press 1 else press 0"<<endl;
        cin>>x;
        if(x==0){
          return ;
        }
        
      }
      else 
      {
        return;
      }
    }
    Node *ptr = head;
    while (ptr ->next!= NULL)
    {
      ptr = ptr->next;
    }
    temp = new Node();
    cout << "Enter the value which you want to insert : ";
    cin >> value;
    temp->data = value;
    temp->next = NULL;
    ptr->next = temp;
    display(head);
  }
}

void deleteNode(Node * &temp){
      int pos;
      Node * ptr1,*ptr2;
      ptr1=head;
      cout<<"enter the position from which you want to delet node;"<<endl;
      cin>>pos;
      if(temp==NULL){
        cout<<"Linked list does not exists:"<<endl;
        return ;
      }
      for(int i=1;i<pos-1;i++){
        ptr1=ptr1->next;
        
      }
      ptr2=ptr1->next;
      ptr1->next=ptr2->next;
      ptr2->next=NULL;
      delete ptr2;
      cout<<"Node Successfully deleted : "<<endl;
      display(head);
}

void reverseLinkedlist(){
  
     Node *ptr, * prev,*temp;
      ptr=head->next;
     temp=head->next->next;
     prev= head;
     prev->next=NULL;
    
     while(ptr!=NULL){
      
             ptr->next=prev;
             prev= ptr;
             ptr=temp;
             if(temp==NULL){
             break;}
             temp=temp->next;
            
     }
    //  head->next=NULL;
     head= prev;
  
     cout<<"reversed Linked List is :"<<endl;
     display(head);
}

void reverseRecursively(){

}

void rotatelinkedlist(Node * temp){
if(temp->next!=NULL){
while(temp->next->next!=NULL){
  temp=temp->next;
}
for(int i=1;i<=2;i++){
  temp->next->next=head;
  head= temp->next;
  temp->next=NULL;
}
}
cout<<"After rotation : ";
display(head);
}

int main()
{

  cerateLinkedlist(head,5);
  int choice;

  // cout << "Press 1  for  insertion at begning ." << endl;
  // cout << "Press 2  for  insertion at middle." << endl;
  // cout << "Press 3  for  insertion at end ." << endl;
  // cin >> choice;
  // insert(head, choice);
  // deleteNode(head);
  reverseLinkedlist();
  // rotatelinkedlist(head);

  return 0;
}