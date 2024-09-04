#include<iostream>
using namespace std;

int calculateFact(int n){
if(n==1){
    
cout<<n<<"  =  ";
    return 1;
}
cout<<n<<"  *  ";
return n*calculateFact(n-1);
}
int main(){
    int x;
    cin>>x;
    int result=calculateFact(x);
    cout<<result;
    return  0;

    }