#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int maxDiv= min(a,b);
    int divisor;
    // int maxDivisor=1;
    for(int i=maxDiv;i>=1;i--){
        if(a%i==0 && b%i==0){
            divisor = i;
            break;
            // maxDivisor = max(maxDivisor,divisor);
        }
    }
    cout<<divisor;
}

while( a>b && b>0){
    if(A>)
}