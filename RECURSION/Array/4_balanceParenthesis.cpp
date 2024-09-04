#include<iostream>
#include<vector>
using namespace std;

// recursive function to print parenthesis
void parenthesis(int pair,int left,int right,vector<char>&ans){
    // Base condition
    if(left=right=pair){  
        for (auto x :ans){
            cout<<x;
        }
        return;
    }
    // including the left=0 or left = right !=pair condition
      if(left-right==0){
         ans.push_back('(');
         
      }
      if(left=pair&&left>right){
        while(right<=left){
          ans.push_back(')'); 
          right++;      
        }
      }
    // including gthe left parenthesis
    ans.push_back('(');
    
     parenthesis(pair,left+1,right,ans);
    //  including right parenthesis
    ans.pop_back();
    ans.push_back(')'); 
     parenthesis(pair,left,right+1,ans);

}

int main(){
int pair;
cout<<"Enter the pairs of parenthesis  : ";
cin>>pair;
vector<char>ans;
    parenthesis(pair,0,0,ans);
    return 0;
}