#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    string str;
    cin>>str;
   int  n= str.size();
vector<char> odd;
vector<char>even;
    for(int i=0;i<n;i++){
        if(i%2==0)even.push_back(str[i]);
        else odd.push_back(str[i]);
    }
    // for(auto it:even){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it:odd){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
map<char,int>mapp_even;
map<char,int>mapp_odd;
for(int i=0;i<even.size();i++){
 mapp_even[even[i]]++;
}
for(int i=0;i<even.size();i++){
 mapp_odd[odd[i]]++;
}

// for(auto it: mapp_even){
// cout<<it.first<<" "<<it.second<<endl;
// }
// cout<<endl;
// for(auto it: mapp_odd){

int max1=0,max2=0;
for(auto it:mapp_even){
    
}
}