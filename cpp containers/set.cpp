#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s = {1,2,3,4,5};
    s.insert(3);
    s.insert(33);
    s.insert(30);
    // for(auto& x:s){
    //     cout<<x<<" ";
    // }

    // set<int>::iterator it = s.find(30);
    // cout<<*it<<endl;
    // it++;     it doesnt point next memory location 8
// cout<<*it;

cout<<*s.begin();    
cout<<*s.end();
    return 0;
}