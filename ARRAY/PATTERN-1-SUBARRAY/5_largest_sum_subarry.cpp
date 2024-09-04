
#include<iostream>
using namespace std;
int main(){
int N;
cout<<"Enter size of array:";
cin>>N;
int array[N];
for(int i=0;i<N;i++){
    cin>>array[i];
}
cout<<"ARRAY IS  : "<<endl;
for(int i=0;i<N;i++){
    cout<<array[i]<<"  ";
}
// finding subarray
int sum;int max_sum=0,max_sum_index;
for(int length=1;length<=N;length++){
 int j=length-1;
for(int i=0;i<=N-length;i++){
    sum=0;
    for(int k=i;k<=j;k++){
  
        sum+=array[k];
    }
    if(sum>max_sum){
        max_sum=sum;
        max_sum_index=i;
    }
    j++;
}

}
cout<<max_sum<<" "<<max_sum_index;

    return 0;
}

