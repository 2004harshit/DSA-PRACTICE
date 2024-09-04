#include<iostream>
using namespace std;

int linearSearch(int arr[],int index,int size,int target){
      if(index==size){
        return -1;
      }

      if(arr[index]==target){
        return index;
      }
     return linearSearch(arr,index+1,size,target);

}

void LinearSearch(int arr[],int index,int size,int target){
      if(index==size){
        return ;
      }

      if(arr[index]==target){
        cout<<index;
        return;
      }
      
        LinearSearch(arr,index+1,size,target);
        return ;
  
}


int main(){

int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
int target;
cin>>target;

int result = linearSearch(arr,0,size,target);
cout<<result;

    return 0;
}