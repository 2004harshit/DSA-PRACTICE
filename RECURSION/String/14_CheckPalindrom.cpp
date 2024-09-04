#include<iostream>
using namespace std;

int checkPalindrom(string str,int start,int end){
    if(start>end){
        return 1;
    }
    if(str[start]!=str[end]){
       return 0;
    }
   return  checkPalindrom(str,start+1,end-1);
}



int main(){
    string str;
    cin>>str;
    int size=str.size();
    int result=checkPalindrom(str,0,size-1);
    cout<<result;
    return 0;
}