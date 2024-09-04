#include<iostream>
using namespace std;

void printsumofArray(int arr[],int index,int size,int sum){
    if(index==size){
        cout<<"Sum of array : "<<sum<<endl;
        return ;
    }
    // cout<<arr[index]<<"  ";
    sum+=arr[index];
    printsumofArray(arr,index+1,size,sum);

}

int sumofArray(int arr[],int index,int size){
    if(index==size){
        return 0;
    }
   
  return arr[index]+ sumofArray(arr,index+1,size);
    //  cout<<arr[index]<<"  ";

}
int main(){

int size;
cout<<"enter the size of the array : ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}


printsumofArray(arr,0,size,0);
cout<<endl;
int result = sumofArray(arr,0,size);
cout<<result;
    return 0;
}