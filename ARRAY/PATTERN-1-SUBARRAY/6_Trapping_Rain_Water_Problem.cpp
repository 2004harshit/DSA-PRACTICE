#include<iostream>
#include <climits>

using namespace std;
int main(){
    int n;
cout<<"Enter length :";
cin>>n;
int height[n],left_max,height_max,right_max;

for(int i=0;i<n;i++){
    cin>>height[i];
}

int max_height=height[0];

for(int i=0;i<n;i++){
    if(height[i]>max_height){
        max_height=height[i];
    }
} 
int water=0;
left_max=0;
for(int i=1;height[i]!=max_height;i++){
    if(left_max>height[i]){
     water+=left_max-height[i];
    }
    else{
       left_max=height[i]; 
    }
}
right_max=0;
for(int i=n-1;height[i]<max_height;i--){
    if(right_max<height[i]){
     water+=right_max-height[i];
    }
    else{
        right_max=height[i];
    }

}
cout<<water;
    return 0;
}
