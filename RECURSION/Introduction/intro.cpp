// write a progrm which prints x days left for birthday 
// where x ->[1 -5]

#include<iostream>
using namespace std;


void greet(int x){
for(int i=x;i>=1;i--){
cout<<i<<"days left for birthday."<<endl;
}
}
// recursive function
void greetRecursively(int x){
 
     if(x==0){
        cout<<"Happy Birthday !"<<endl;
        return ;
    }
    cout<<x<<"days left for birthday."<<endl;
   
   
    greetRecursively(x-1);
}

int main(){
int x=50;


/*
// using loop
for(int i=x;i>=1;i--){
cout<<i<<"days left for birthday."<<endl;
}
*/

// greet(x);

greetRecursively(x);


    return 0;
}