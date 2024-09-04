#include<iostream>
#include<vector>
using namespace std;

void printSequence(int index,int size ,int arr[],vector<int>&ans){
     if(index>=size){
         for (auto element : ans) {
        cout << element << " ";
    }
     cout<<endl;
        return ;
     }
     //if i accept the element at index
     ans.push_back(arr[index]);
    printSequence(index+1,size,arr,ans);
    //if i dont accept the element at index
    ans.pop_back();
    printSequence(index+1,size,arr,ans);
    }


int main(){
int size;
cin>>size;
int array[size];
for(int i=0;i<size;i++){
    cin>>array[i];
}
cout<<"--------------------------------"<<endl;
vector<int>ans;
printSequence(0,size,array,ans);


    return 0;
}