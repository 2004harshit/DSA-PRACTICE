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
cout<<"ARRAY IS  : "<<"   ";
for(int i=0;i<N;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
// logic to find prefix sum

int prefixSum[N];
prefixSum[0]=array[0];
for(int i=1;i<N;i++){
    prefixSum[i]=prefixSum[i-1]+array[i];
}
cout<<"PREFIX SUM ARRAY IS : "<<"    ";
for(int i=0;i<N;i++){
    cout<<prefixSum[i]<<" ";
}


// FINDING SUBARRAY  USING PREFIX SUM SUBARRAY

//  P[i-1]-p[i-2]            here, p= prefix sum array     ,   i= ith subarray of size 1

/*
cout<<endl;
cout<<"SUBARRY OF SIZE 1 : ";
for(int i=1;i<=N;i++){
    if(i==1){
        cout<<prefixSum[i-1]<<"  ";
    }
    else{
    cout<<prefixSum[i-1]-prefixSum[i-2]<<"  ";
    }
  
}
*/


// SUBARRAY OF SIZE 2:

//  P[i-1]-p[i-2]            here, p= prefix sum array     ,   i= ith subarray of size 1
int size;
cout<<"Enter the size of subarray :";
cin>>size;
int no_of_subarray=N-size+1;
cout<<endl;
if(size==2){
cout<<"SUBARRY OF SIZE 2 : "; 
for(int i=1;i<=no_of_subarray;i++){
     if(i==1){
        cout<<"("<<prefixSum[i-1]<<","<<prefixSum[(i+1)-1]-prefixSum[(i+1)-2]<<")"<<"  ";
    }
    else{
   cout<<"("<<prefixSum[(i)-1]-prefixSum[(i)-2]<<","<<prefixSum[(i+1)-1]-prefixSum[(i+1)-2]<<")"<<"  ";
    }
}
}





return 0;
}