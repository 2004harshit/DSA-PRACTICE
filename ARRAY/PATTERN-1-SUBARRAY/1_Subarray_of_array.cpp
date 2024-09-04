// METHOD  1
// TIME COMPLEXITY= Bigo(n^3)
// #include<iostream>
// using namespace std;
// int main(){
// int N;
// cout<<"Enter size of array:";
// cin>>N;
// int array[N];
// for(int i=0;i<N;i++){
//     cin>>array[i];
// }
// cout<<"ARRAY IS  : "<<endl;
// for(int i=0;i<N;i++){
//     cout<<array[i];
// }
// cout<<"\n Types of Subarry : "<<N<<endl;
// cout<<"No of total Subarray : "<<(N*(N+1))/2<<endl;


// for(int length=1;length<=N;length++){
//  int j=length-1;
// for(int i=0;i<=N-length;i++){
//     for(int k=i;k<=j;k++){
//         cout<<array[k];
//     }
//     cout<<endl;
//     j++;
// }

// }

//     return 0;
// }


// Method 2
// TIME COMPLEXITY=O(N^3)
// #include<iostream>
// using namespace std;
// int main(){
// int N;
// cout<<"Enter size of array:";
// cin>>N;
// int array[N];
// for(int i=0;i<N;i++){
//     cin>>array[i];
// }
// cout<<"ARRAY IS  : "<<endl;
// for(int i=0;i<N;i++){
//     cout<<array[i];
// }
// cout<<"\n Types of Subarry : "<<N<<endl;
// cout<<"No of total Subarray : "<<(N*(N+1))/2<<endl;


// for(int i=0;i<N;i++){
//     for(int j=0;j<N;j++){
//         for(int k=i;k<=j;k++){
//             cout<<array[k];
//         }
//         cout<<endl;
//     }
// }

//     return 0;
// }


#include<iostream>
using namespace std;

int subArray(int start,int end,int array[]){
if(start>end){
    return 0;
}
 for(int i=start;i<=end;i++){
cout<<array[i];
 }
 cout<<endl;
 subArray(start,end-1,array);

}
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
cout<<"\n Types of Subarry : "<<N<<endl;
cout<<"No of total Subarray : "<<(N*(N+1))/2<<endl;



for(int i=0;i<N;i++){
subArray(i,N-1,array);
cout<<endl;
}
    return 0;
}