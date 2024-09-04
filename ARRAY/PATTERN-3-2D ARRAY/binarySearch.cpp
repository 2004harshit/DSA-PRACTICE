#include<iostream>
using namespace std;
int main(){
    int m,n,x;
    cin>>m>>n>>x;
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"---------------------------------------------"<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<"----------------------------------------------"<<endl;
    
        int mid,flag=0;
        for(int i=0;i<n;i++){
            
            if(matrix[i][0]<=x &&matrix[i][m-1]>=x){
               int start=0,end=m-1;
              while(start<=end){
                mid= (start+end)/2;
                cout<<"row = "<<i<<"  start = "<<start<<"  end = "<<end<<"   mid = "<<mid<<endl;
                
                if(matrix[i][mid]==x){
                //   cout<<"found";
                flag++;
                  break;
                }
                else if(matrix[i][mid]>x){
                    end=mid-1;
                }
                
                else{
                    start=mid+1;
                }
                
            }   
            }
            
            else{
                continue;
                // cout<<"--------"<<endl;
            }
           
        }
         if(flag>0)cout<<"found";
         else
        cout<<"not found";
}