#include<iostream>
using namespace std;


int printTable(int n,int lim){
      if(lim==1){
        return 1;
    }
  int result =  printTable(n,lim-1);
   cout<<n<<"  *  "<<lim-1<<"    =    "<<result<<endl;
    return lim*n;
    
    // cout<<n<<"  *  "<<lim<<"  =  "<<result<<endl;
}




int main(){
int result = printTable(5,10);
cout<<5<<"  *  "<<10<<"    =    "<<result<<endl;
    return 0;
}