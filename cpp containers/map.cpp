//  associative container   , store  key(unikely identify the value), value pair

// unordered map ->   unordered (key, value) pair

// each element associate a key to mapped value
//  no two elements can have equivalent keys

#include<iostream>
#include <unordered_map> 
using namespace std;
int main(){
     unordered_map<string,int>umap;
     umap["A"]=10;
     umap["B"]=20;
     umap["C"]=30;
     umap["D"]=40;
     umap["E"]=50;
     for(auto x: umap){
        cout<<x.first<<"  "<<x.second<<endl;
     }
     cout<<"------------------------------------"<<endl;
     unordered_map<int,int>umap1;
     umap1[1]=1;
     umap1[2]=2;
     umap1[3]=3;
     umap1[4]=4;
     umap1[5]=5;
     umap1[4]=5;
for(auto x: umap1){
        cout<<x.first<<"  "<<x.second<<endl;
     }
     cout<<"------------------------------------"<<endl;
     unordered_map<string, int>map;
    //  inserting using insert function
   //  map.insert(make_pair("harshit",1));
   //  cout<<map.find('harshit')==map.end();
    return 0;
}