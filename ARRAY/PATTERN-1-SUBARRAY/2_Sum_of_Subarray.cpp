
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

int sum=0;
int S;
cout<<"Enter the target sum:";
cin>>S;

for(int length=1;length<=N;length++){
 int j=length-1;
for(int i=0;i<=N-length;i++){
    sum=0;
    for(int k=i;k<=j;k++){
        sum+=array[k];
    }
    if(sum==S){
        cout<<"Subarray found:"<<endl;
        cout<<" Starting index:"<<i<<"  "<<"ending index"<<j<<endl; 
        break;
    }
    cout<<endl;
    j++;
}

}

    return 0;
}