#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s = {1,2,3,4,5};
    s.insert(3);
    s.insert(33);
    s.insert(30);
    for(auto& x:s){
        cout<<x<<" ";
    }


    
    return 0;
}