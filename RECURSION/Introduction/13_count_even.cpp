#include<iostream>
using namespace std;

void countEven(int arr[],int index,int size,int count){
    if(index==size){
        cout<<"Even no  : "<<count;
        return ;
    }
  if(arr[index]%2==0){
    count++;
  }
    // cout<<arr[index]<<"  ";
    countEven(arr,index+1,size,count);
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


countEven(arr,0,size,0);
cout<<endl;
printReverseArray(arr,0,size);
    return 0;
}