#include<bits/stdc++.h>  //not in interview
// #include<math.h>
using namespace std;
namespace harsh
{int val = 50;
    
} // namespace harsh


array<int , 3>arr0;   //array declaration ->{0,0,0}

int main(){
    // int val=50;
    double val =10.01;
    cout<<val<<endl;
    cout<<harsh::val<<endl;
   cout<<"---------------------------"<<endl;

  array<int , 3>arr;   //array declaration ->{?,?,?}

  array<int, 5>arr1={1,2,3};  // ->{ 1 , 2 , 3 , 0 , 0}
  array<int, 5>arr2={0};  // ->{ 0 , 0 , 0 , 0 , 0}

  int arr3[1000]={0};   //first index have zero

  array<int,5>Arr;
  Arr.fill(5);    //entire array is filed with 5 ->{5,5,5,5,5}
  

  for(int i=0;i<5;i++){
    cout<<Arr.at(i)<<" ";
  }

    // iterators
    // begin(),   end(),   rbegin(),   rend()




    vector<int>Array;  //  ->{ }
    cout<<Array.size()<<endl;  //  print 0
    Array.push_back(0);
    Array.push_back(1);











    return 0;
}