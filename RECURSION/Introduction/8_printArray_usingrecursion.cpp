#include<iostream>
using namespace std;

void printArray(int arr[],int index,int size){
    if(index==size){
        return ;
    }
    cout<<arr[index]<<"  ";
    printArray(arr,index+1,size);

}

void printReverseArray(int arr[],int index,int size){
    if(index==size){
        return ;
    }
   
    printReverseArray(arr,index+1,size);
     cout<<arr[index]<<"  ";

}
int main(){

int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}


printArray(arr,0,size);
cout<<endl;
printReverseArray(arr,0,size);
    return 0;
}