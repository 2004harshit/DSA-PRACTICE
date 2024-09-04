#include<iostream>
using namespace std;
int main(){
int row, col;
cout<<"Enter the row and column : ";
cin>>row;
cin>>col;
int array[row][col];
cout<<"Entert the values of 2d array : "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>array[i][j];
    }
}

cout<<"2D array is  :  "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<array[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;

for(int j=0;j<col;j++){
    if(j%2==0){
    for(int i=0;i<row;i++){
        cout<<" " <<array[i][j];
    }
    }
    else{
          for(int i=row-1;i>=0;i--){
        cout<<" " <<array[i][j];
    }
    }
   
}

    return 0;
}