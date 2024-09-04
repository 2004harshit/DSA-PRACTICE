// TIME COMPLEXITY=O(N)
// SPACE COMPLEXITY=O(N)

#include<iostream>
using namespace std;
int main(){
    // size declararion
int N;
cout<<"Enter size of array:";
cin>>N;
int array[N];

// input the array
for(int i=0;i<N;i++){
    cin>>array[i];
}

// printing the arrray
cout<<"ARRAY IS  : "<<endl;
for(int i=0;i<N;i++){
    cout<<array[i];
}

// logic to find prefix sum
int prefixSum[N];
prefixSum[0]=array[0];
for(int i=1;i<N;i++){
    prefixSum[i]=prefixSum[i-1]+array[i];
}
for(int i=0;i<N;i++){
    cout<<prefixSum[i]<<" ";
}

return 0;
}


// TIME COMPLEXITY=O(N)
// SPACE COMPLEXITY=O(1)

/*
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
    cout<<array[i];
}


int sum=array[0];
for(int i=1;i<N;i++){
   sum=sum+array[i];
   array[i]=sum;
}
for(int i=0;i<N;i++){
    cout<<array[i]<<" ";
}



return 0;

}
*/

