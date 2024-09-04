#include<bits/stdc++.h>
using namespace std;

int main(){
vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
vector<vector<int>>ans;

sort(arr.begin(),arr.end());
int row = arr.size();
for(int i=0;i<row;i++){
    if(ans.empty() || arr[i][0]>ans.back()[1]){
        // ans.push_back({arr[i][0],arr[i][1]});
        ans.push_back(arr[i]);
    }
    else{
        ans.back()[1]= max(ans.back()[1],arr[i][1]);
    }
}
int i= 0;
for (const auto& row : ans) {
    for (const auto& element : row) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

    return 0;
}


