#include<iostream>
using namespace std;
int main(){
int row,col,frequency;
int n;
cout<<"enter the value : "<<endl;
cin>>n;
int value;
for(int row=n;row>0;row--){

value=n; 
    for(int j=n;j>0;j--){
        frequency=row;
        while(frequency>0){
            cout<<value<<" ";
            frequency--;
        }
        value--;
    }
    cout<<endl;
}


    return 0;
}