#include<iostream>
using namespace std;

int findMin(int arr[],int index,int size){
if(index==size-1){
 return arr[index];   
}

return min(arr[index],findMin(arr,index+1,size));
}

int main(){

int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}

int result=findMin(arr,0,size);
cout<<result;
    return 0;
}