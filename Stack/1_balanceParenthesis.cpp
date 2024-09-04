#include<iostream>
using namespace std;


bool checkParenthesis(string s){
   int len = s.length()-1;
    char * arr;
       arr = new char[len];
       int top=-1;
       for(int i=0;i<=len;i++){
        top++;
        arr[top]= s[i];
       }
       char ch;
       while(top>=0){
        ch = top;
        top--;
        if(ch !=){
            top--;
        }
        else{
            return false;
        }
       }
       return true;
    
}


int main(){
string s;
cin>>s;
int result = checkParenthesis(s);
if(result==1)
{
    cout<<"balanced";
}  
else{
    cout<<"not balanced";
}
  return 0;
}