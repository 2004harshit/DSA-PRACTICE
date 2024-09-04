#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int noSpace = n-1;
int noStar =1;
int a=1;

if(a<=n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=noSpace;j++){
            cout<<" ";
        }
        for(int k=1;k<=noStar;k++){
            cout<<"* ";
        }
        noSpace--;
        noStar++;
        a++;
        cout<<endl;
    }
}
// cout<<noStar;
noSpace=0,noStar=4;
if(a>n){
    for(int i=1;i<=n-1;i++){
        for(int j=noSpace;j>=1;j--){
            cout<<" ";
        }
        for(int k=noStar;k>=1;k--){
            cout<<" *";
        }
        noSpace++;
        noStar--;
        a++;
        cout<<endl;
    }
}

    return 0;
}