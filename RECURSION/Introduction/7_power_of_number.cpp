#include<iostream>
using namespace std;

int calculatePower(int n, int power){
    if(power==0){
        return 1;
    }
    

    return n* calculatePower(n,power-1);
    

}

int main(){
int n,pow;
cin>>n>>pow; 
int result = calculatePower(n,pow);
cout<<n<<" ^ "<<pow<<"  =  "<<result;
    return 0 ;
}