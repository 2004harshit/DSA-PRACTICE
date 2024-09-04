#include<iostream>
using namespace std;
int main(){
int size,target;
cout<<"enter the target : ";
cin>>target;
cout<<"enter the size";
cin>>size;
int array[size];
for(int i=0;i<size;i++){
  cin>>array[i];
}

for(int i=0;i<size;i++){
    cout<<"  "<<array[i];
}
cout<<"--------------------------------------------------------------------------"<<endl;


int start,end,first=-1,last=-1,mid;
        // finding first occurence
        start=0 ,end=size-1;
        while(start<=end){
          mid=(start+end)/2;
          if(array[mid]==target){
           first=mid;
           end=first-1;
        //    cout<<start<<end<<endl;
        cout<<first<<endl;

          }
         else if(array[mid]>target){
             end=mid-1;
         }

         else{
             start=mid+1;
         }
        }
        cout<<"--------------------------------------------------------------------------"<<endl;
          
        // finding last occurence
         start=0 ,end=size-1;
        while(start<=end){
          mid=(start+end)/2;
          if(array[mid]==target){
           last=mid;
           start=mid+1;
        //    cout<<start<<end<<endl;
        cout<<last<<endl;
          }
         else if(array[mid]>target){
             end=mid-1;
         }

         else{
             start=mid+1;
         }
        }
   cout<<"--------------------------------------------------------------------------"<<endl; 
   cout<<first<<last;

    return 0;
}