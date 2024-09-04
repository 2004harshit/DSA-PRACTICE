#include<iostream>
using namespace std;

// int countVovel(string str,int start,int end ,int count){
//     if(start==end){
//         return count;
//     }
//     countVovel(str,start+1,end,count);
// if(str[start]=='a'||str[start]=='e'||str[start]=='i'||str[start]=='o'||str[start]=='u'){
//          count+=1;
//        return count;
// }
// else{
//     return count;
// }

// }

int countVovel(string str,int start,int end ,int count){
    if(start>end){
        return count;
    }
    
if(str[start]=='a'||str[start]=='e'||str[start]=='i'||str[start]=='o'||str[start]=='u'){
    
     return 1+countVovel(str,start+1,end,count);
}
else{
  return countVovel(str,start+1,end,count);
}

}



int main(){
    string str;
    cin>>str;
    int size=str.size();
    int result=countVovel(str,0,size-1,0);
    cout<<result;
return 0;
}