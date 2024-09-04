// subpattern1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int min=0;
    int i ,j;
    for(int row=1;row<=2*n-1;row++){
        for(int  col=1 ;col<=2*n-1;col++){
            if(row>n){
                i=2*n-row;
            }
            else{
             i=row;
            }
            if(col>n){
                j=2*n-col;
            }
            else{
                j=col;
            }
             if(i<j) min=i;
             else min=j;
             cout<<n-min+1<<" ";
        }
        cout<<endl;
    }
}