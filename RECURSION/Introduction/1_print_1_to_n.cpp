#include <iostream>
using namespace std;

// print number between n to N
void printNum(int n, int N)
{
    if (n == N)
    {
        cout << n << endl;
            cout<<"-----------------------"<<endl;
        return;
    }

    cout << n << endl;
    if(n==2)
    return;
    printNum(n+1, N);
    cout<<n<<endl;

}

// function to print number between 1 to n increasing prder order
void printNum2(int N)
{
    if (N == 1)
    {
        cout<<1<<endl;
        return;
    }
    printNum2(N - 1);

    cout << N << endl;
}

int PrintNum(int n,int N){
   if(n==N){
    cout<<n<<endl;
    return 0;
   }
cout<<n<<endl;
PrintNum(n+1,N);

cout<<n<<endl;
return 0;

}


// print value of n when n==3
int PrintNumber(int n,int N){
   if(n==N+1){
    // cout<<n<<endl;
    return 0;
   }
// cout<<n<<endl;
if(n==3){
    return n;
}
 return PrintNumber(n+1,N);

// cout<<n<<endl;


}


int main()
{
    int n;
    cin>>n;
    // printNum(n,5);
    // PrintNum(n,5);
    // printNum2(n);

    int result= PrintNumber(1,n);
    cout<<result;
    return 0;
}