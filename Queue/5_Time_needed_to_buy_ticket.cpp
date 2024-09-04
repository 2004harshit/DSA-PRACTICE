#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time =0;
        queue<int > q;
        int size = tickets.size();
        for(int i=0;i<size;i++){
            q.push(i);
        }
        while(tickets[k]){
            time++;
            cout<<tickets[q.front()]<<endl;
            tickets[q.front()]--;
            if( tickets[q.front()]==0){
                q.pop();
                continue;
            }
            
            q.push(q.front());
            q.pop();
       
        }
        return time;
    }
};

int main(){
vector<int>tickets;
int size,k;
cout<<"enter the size : ";
cin>>size;
cout<<"enter k : ";
cin>>k;
for(int i=0;i<size;i++){
    int x;
    cin>>x;
    tickets.push_back(x);
}
Solution s;
cout<<s.timeRequiredToBuy(tickets,k);

    return 0;

}