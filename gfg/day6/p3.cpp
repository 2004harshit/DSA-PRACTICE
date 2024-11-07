#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    // using two pointer approach
    int i = 0, j = n - 1,count=0;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            // cout << arr[i] << " " << arr[j] << endl;
            // break;
            // count++;
            // i++;
            // j--;
            int cnt_left =1,cnt_right=1;
            i++;
            while(i<j && arr[i]==arr[i-1]){
                cnt_left++;
                i++;
            }
            j++;
            while(j>i && arr[j]==arr[j+1]){
                cnt_right++;
                j--;
            }
           count = count+cnt_left+cnt_right;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"pairs = "<<count<<endl;
}