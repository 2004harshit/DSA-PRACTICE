#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int array[size];

    for(int i=0;i<size;i++){
        cin>>array[i];
    }

        for(int i=0;i<size;i++){
        cout<<array[i];
    }
    cout<<endl;

int start=0,end=size-1,mid;
         while(start<=end){
        //  mid= start-(start-end)/2;
        mid = start + (end - start) / 2;
         if(array[mid]>array[mid+1] && array[mid]>array[mid-1]){
         cout<<"peak index : "<<mid<<endl;
         break;
         }
         else if(array[mid]>array[mid-1]&& array[mid]<array[mid+1]){
            start = mid+1;
    
         }
         else{
             end=mid-1;
         }

         }
         return 0;
}
