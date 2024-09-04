#include<iostream>
#include<vector>
#include <utility>  
using namespace std;

int main(){
    // declaring the vector
vector<int>v;       //size is not given;
cout<<v.size()<<endl;    // size = 0

// inserting in the vector
v.push_back(1); 
v.push_back(2); 
cout<<v.size()<<endl;
// cout<<v[0];

v.emplace_back(3);
cout<<v.size()<<endl;


//  vector of pairs
vector<pair<int, int>>vec;
vec.push_back({1,2});
vec.emplace_back(4,3);
cout<<vec.size()<<endl;
// cout<<vec[0].first;

// vector with size in definition
vector<int>V(5);   //  [ 0 0 0 0 0 0 ]
cout<<V.size()<<endl;
V.push_back(1);
V.push_back(2);
V.push_back(3);
V.push_back(4);
V.push_back(5);
V.push_back(6);
cout<<V.size();


// iterator
vector<int>:: iterator it= V.begin();
cout<<*it<<endl;
it++;
cout<<*it<<endl;

for (vector<int>::iterator it = V.begin();it!=V.end();it++){
    cout<<*it<<" ";
}

cout<<endl;

for (auto it = V.begin();it!=V.end();it++){
    cout<<*it<<" ";
}

cout<<endl;

// for each loop 
for(auto it:V){
    cout<<it<<" ";
}
cout<<endl;
for( int i = 0;i< V.size();i++){
   cout<<V[i]<<" ";
}
cout<<endl;
cout<<"-------------------------------------"<<endl;

// deletion in vector
V.erase(V.begin()+1,V.begin()+5);

for(auto it:V){
    cout<<it<<" ";
}

cout<<endl;

// insertion
V.insert(V.begin(),200);
V.insert(V.begin()+3,3,25);
for(auto it:V){
    cout<<it<<" ";
}
cout<<endl;

// copy function
vector<int>copy(2,50);
V.insert(V.begin(),copy.begin(),copy.end());
for(auto it:V){
    cout<<it<<" ";
}

V.pop_back();

// v1.swap(v2);

V.clear();
cout<<V.size()<<endl;

vector<int>vect;
vect.push_back(1);
cout<<vect.back();
// 2d vector
// vector<vector<int>>Vec(10);
// cout<<Vec.size();
// Vec.push_back({1});
// Vec.push_back({1,2,3});
// Vec.push_back({1,4,5});
vector<int> temp = {1,2,3};
vector<int> temp2;
temp2=temp;
for(auto it :temp2){
    cout<<it;
}
    return 0;
}