#include<iostream>
#include<map>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n];
 int target;
 cin>>target;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
map<int,int>mapp;

 for(int i=0;i<n;i++){
    mapp[arr[i]]=i;
 }
 for(int i=0;i<n;i++){
    if(mapp.find(mapp[arr[i]-target])!=mapp.end()){
        cout<<i<<" "<<mapp[target-arr[i]];
    }
 }
}