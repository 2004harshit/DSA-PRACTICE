#include<iostream>
using namespace std;


int * stack;
int size;
int top=-1;

void createStack(int  *&Stack,int size);
void Push(int value);
void Pop();
bool isEmpty();
void Size();
void Top();


int main(){
cout<<"Enter the size of the stack :"<<endl;
cin>>size;
createStack(stack,size);
Push(10);
Push(20);
Push(30);
Pop();
Size();
Top();
cout<<isEmpty();
    return 0;
}

void createStack(int *&Stack, int size){
    Stack = new int[size];
}

void Push(int value){
    if(top>=size){
        cout<<"Stack overflow."<<endl;
        return;
    }
    else{
        top++;
        stack[top]=value;

    }
}

void Pop(){
     if(top==-1){
        return ;
     }
     else{
        top--;
     }
}
bool isEmpty(){
    if(top==-1){
       return 1;
    }
    else{
        return 0;
    }
}

void Size(){
    // int temp =top,count = 0;
    // while(temp>=0){
    //     count++;
    //     temp--;
    // }
    // cout<<count;
if(top==-1){
    return ;
}
    cout<<top+1<<endl;
}

void Top(){
    if(top==-1){
        return ;
    }
    cout<<stack[top]<<endl;
}