#include <iostream>
#include<vector>
using namespace std;
int main()
{

int size,k;
cout<<"enter the size";
cin>>size;
cout<<"enter the jump";
cin>>k;
int energy[size];
for(int i=0;i<size;i++){
    cin>>energy[i];
}


    int sum = 0, max_sum = -1;
    // int size = energy.size() - 1;
    size-=1;
    for (int i = 0; i + k <= size; i++)
    {
        sum = energy[i];
        for (int j = i + k; j <= size; j += k)
        {
            sum += energy[j];
        }
        if (sum > max_sum)
        {
            max_sum = sum;
        }
    }
 cout<<"max sum : "<<max_sum;
return 0;
}