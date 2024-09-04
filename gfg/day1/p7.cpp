#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max=0;
    for(int i=1;i<n;i++){
      if(arr[i]>arr[max]){
      max=i;
      }
    }
    bool isSorted=true;
    for(int i=max-1;i>0;i--){
       if(arr[i]<arr[i-1]){
         isSorted=false;
         break;
       }
    }
    if(isSorted){
        for(int i=max+1;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                isSorted=false;
                break;
            }
        }
    }
    if(isSorted){
        cout<<"True";

}

else{
    cout<<"False";
}
}
