#include<iostream>
using namespace std;

void printEvenNo(int N){
    if(N==0){
  cout<<0<<endl;
    return ;
}
    if(N%2==0){
    printEvenNo(N-2);
     cout<<N<<endl;
    }
    else{
    printEvenNo(N-1);
    //  cout<<N<<endl;
    }



}
int main(){
printEvenNo(5);
    return 0;
}