// BUBBLE SORTING
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
// int array[n];
// for(int i=0;i<n;i++){
//     cin>>array[i];
// }

// for(int i=0;i<n;i++){
//     cout<<"  "<<array[i];
// }
// cout<<endl;

// for(int i=0;i<n-1;i++){
//          for(int j=0;j<n-1-i;j++){
//             if(array[j]>array[j+1]){
//                 swap(array[j],array[j+1]);
//             }
//          }
//     }
//     for(int i=0;i<n;i++){
//     cout<<"  "<<array[i];
// }

//     return 0;
// }

// SELECTION SORTING
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "  " << array[i];
    }
    cout << endl;
   int smaller_indx=0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n ; j++)
        {
            if (array[j]<array[smaller_indx])
            {
                 smaller_indx=j;   
            }
        }
        swap(array[i],array[smaller_indx]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "  " << array[i];
    }

    return 0;
}