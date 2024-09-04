#include<iostream>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
//         finding the length of the word and no of vovel and consonent.
        int len= word.length()-1;
        if(len<3){
            return 0;
        }
        
        int vovelCount=0;
        int consonentCount=0;
        
        for(int i=0;i<=len;i++){
            
            if((word[i]-'0'>='a'-'0' && word[i]-'0'<='z'-'0')|| (word[i]-'0'>='A'-'0' && word[i]-'0'<='Z' -'0') || (word[i]-'0'>=0 && word[i]-'0'<=9) ){
                
               if((word[i]-'0'>='a'-'0' && word[i]-'0'<='z'-'0')|| (word[i]-'0'>='A'-'0' && word[i]-'0'<='Z'-'0' )) {
                   
                   if(word[i]=='a'|| word[i]=='e'|| word[i]=='i'|| word[i]=='o'|| word[i]=='u'|| word[i]=='A'|| word[i]=='E'|| word[i]=='I'||                       word[i]=='O'|| word[i]=='U'){
                       vovelCount++;
                   }
                   else{
                       consonentCount++;
                   }

               }
            }
            
            
            else{
                return 0;
            }
        }

        if(consonentCount>0 && vovelCount>0){
            return 1;
        }
        
        else{
            return 0;
        }
        
        
    }
};

int main(){
    Solution s1;
   int result =  s1.isValid("Abc");
   cout<<result;

   cout<<'a'-'0';
        return 0;
}