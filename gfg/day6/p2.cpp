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
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            cout << arr[i] << " " << arr[j] << endl;
            break;
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
}