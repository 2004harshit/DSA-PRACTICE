#include<iostream>
#include<utility>
using namespace std;

int main(){
pair<int,int>p;
p.first = 1;
p.second = 2;
cout<<"{ "<<p.first<<" , "<<p.second<<" }";

pair<int,pair<int,int>>p2;
p2.first= 2;
p2.second.first = 3;
p2.second.second = 4;

cout<<p2.first<<endl;
cout<<p2.second.first<<endl;
cout<<p2.second.second<<endl;


    return 0;
}