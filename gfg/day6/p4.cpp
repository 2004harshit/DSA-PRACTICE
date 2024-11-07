#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin>>m;
    vector<int> a(n);
    vector<int> b(b);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    
    unordered_map<int ,int>mapp;
     for (int i = 0; i < n; i++)
    {
        mapp[a[i]]++;
    }
    bool present = true;

   for (int i = 0; i < m; i++)
    {
        if(mapp[b[i]]<1){
            present = false;
            break;
        }
    }
    cout<<present;
}


