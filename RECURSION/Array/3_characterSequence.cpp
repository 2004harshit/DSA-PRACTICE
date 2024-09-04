#include<iostream>
#include<vector>
using namespace std;

void printSequence(int index,int size, string str,vector<char>ans){
  if(index>=size){
   
    return;
  }
  ans.push_back(str[index]);
    for (auto element : ans) {
        cout << element << " ";
    }
    cout<<endl;
  printSequence(index+1,size,str,ans);
  ans.pop_back();
    printSequence(index+1,size,str,ans);

}


int main(){
string str;
cout<<"Enter a string : ";
cin>>str;
int size = str.length();
vector<char>ans;
printSequence(0,size,str,ans);
    return 0;
}