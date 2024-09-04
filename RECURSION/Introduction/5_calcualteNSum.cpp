#include<iostream>
using namespace std;

int calculateNSum(int n){
if(n==1){
    
cout<<n<<"  =  ";
    return 1;
}
cout<<n<<"  +  ";
return n+calculateNSum(n-1);
}
int main(){
    int x;
    cin>>x;
    int result=calculateNSum(x);
    cout<<result;
    return  0;

    }