//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        int size = q.size();
        stack<int>st;
        while(size>0){
            st.push(q.front());
            q.pop();
            size--;
        }
        // inserting the content of stack in queue;
        
        
        while(!st.empty()){
            // int val = st.top();
            q.push(st.top());
            st.pop();
        }
        return q;
    }
};


//{ Driver Code Starts.
int main()
{
    Solution obj;

    queue<int>q;
    int size = 13;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    queue<int>result ;
    result = obj.rev(q);

 while(result.size()){
 cout<<result.front()<<"  ";
 result.pop();
 }
    
return 0;
}
// } Driver Code Ends


