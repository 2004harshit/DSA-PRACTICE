#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int start,length,second;
    start=second=length=0;
    while(second<=n-1){
    if(array[second]>=0){
        length=max(length,second-start+1);
        second++;
    }
    else{
        second++;
        start=second;
    }
    }
    cout<<length;
    return 0;
}