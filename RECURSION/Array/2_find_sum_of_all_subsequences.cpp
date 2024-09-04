// WRITE A PROGRAM TO FIND THE SUM OF ALL SUBSETR AND  FIND IF THERE EXIST A SUBSET WHOSE SUM IS EQUAL TO TARGERT  ALOS PRINT IT

#include<iostream>
#include<vector>
using namespace std;

void printSequence(int index,int size ,int arr[],vector<int>&ans,int sum,int targetSum){
     if(index>=size){
        if(sum==targetSum){
            cout<<"Subset = { ";
            for (auto element : ans) {
        cout << element << " ";
    }
    cout<<" }";
    cout<<" ,  sum = "<<sum;
     cout<<endl;
        }
        return ;
     }
     //if i accept the element at index
     ans.push_back(arr[index]);
     sum+=arr[index];
    printSequence(index+1,size,arr,ans,sum,targetSum);
    //if i dont accept the element at index
    ans.pop_back();
    sum-=arr[index];
    printSequence(index+1,size,arr,ans,sum,targetSum);
    }


int main(){
int size;
int targetSum;
cout<<"enter the sizze of array :";
cin>>size;
cout<<"Enter the target sum : ";
cin>>targetSum;
int array[size];
for(int i=0;i<size;i++){
    cin>>array[i];
}
cout<<"--------------------------------"<<endl;
vector<int>ans;
printSequence(0,size,array,ans,0,targetSum);


    return 0;
}