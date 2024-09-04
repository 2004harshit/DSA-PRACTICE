#include<iostream>
using namespace std;

class Queue{
int * queue;
int size;
int front,rear;

public:

Queue(int n){
  size = n;
  front =-1;
   rear = -1;
  queue = new int[size];
}

void push(int data);
void pop();
void Front();
bool isEmpty();
bool isFull();
void display();
};

void Queue:: push(int data){
    if(rear==size){
        // queue is full
        cout<<"Can't enter new value in queue."<<endl;
    }
    if(rear == -1){
        // queue is empty
        rear++;
        front++;
        queue[front]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}

void Queue::pop(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;

    }

    else{
        front++;
    }
}

void Queue::Front(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }

    else{
        cout<<queue[front]<<endl;
    }

}

bool Queue:: isEmpty(){

    return rear==-1;
}

bool Queue:: isFull(){
   return rear==size-1;
}

void Queue::display(){
    int temp = front;
    if(temp==-1){
        cout<<"Queue is empty."<<endl;
        return ;
    }
    while(temp<=rear){
        cout<<queue[temp]<<"  ";
        temp++;
    }
    cout<<endl;
}

int main(){

Queue q(10);
q.display();
q.push(2);
q.push(5);
q.push(7);
q.push(3);
q.display();
cout<<q.isFull()<<endl;
q.Front();
q.pop();
q.display();
    return 0;
}