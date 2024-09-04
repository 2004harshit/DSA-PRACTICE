#include<iostream>
using namespace std;

void calculateFibonacci(int n,int a,int b){
         int sum =a+b;
         if(sum>n){
            return ;
} 
        cout<<sum<<"  ";
    
        calculateFibonacci(n,b,sum);
}

// finding nth fibonacci
int fib(int n){
   
  if(n==1)
  return 1;
  if(n==0)
  return 0;

   return fib(n-1)+fib(n-2);
  
}
int main(){
// calculateFibonacci(20,0,1);
int result = fib(10);
cout<<result;
    return 0;
}