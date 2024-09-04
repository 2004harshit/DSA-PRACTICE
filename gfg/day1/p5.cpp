#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int min=INT16_MAX;
    // for(int i=1;i<n;i++){
    //     if(arr[i]<min && arr[i]>0){
    //     min=arr[i];
    //     }
    // }
    // cout<<min<<endl;
sort(arr,arr+(n-1));
for(int i=0;i<n;i++){
    if(arr[i]<=0)continue;
    else{
    cout<<arr[i];
    break;
    } 
}

}