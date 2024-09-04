#include<bits/stdc++.h>
using namespace std;

int main(){
vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
vector<pair<int,int>>ans;

sort(arr.begin(),arr.end());

int row = arr.size();
for(int i=0;i<row;i++){
    if(ans.empty() || arr[i][0]>ans.back().second){
        // ans.push_back({arr[i][0],arr[i][1]});
        ans.push_back({arr[i][0],arr[i][1]});
    }
    else{
        ans.back().second= max(ans.back().second,arr[i][1]);
    }
}
for (auto it:ans){
    cout<<it.first<<" "<<it.second;
}

    return 0;
}


