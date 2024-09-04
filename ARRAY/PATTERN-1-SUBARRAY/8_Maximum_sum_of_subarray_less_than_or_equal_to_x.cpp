#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    long long prefix_sum=0,max_sum=0;
	    for(int i=0;i<n;i++){
	        prefix_sum+=array[i];
	       if(prefix_sum>0){
	            
	            if(prefix_sum<=sum){
	                max_sum=max(max_sum,prefix_sum);
	            }
	            else{
	                break;
	             }
	         }
	         
	          else{
	            prefix_sum=0;
	         }
	    }
        cout<<max_sum;

    return 0;
}