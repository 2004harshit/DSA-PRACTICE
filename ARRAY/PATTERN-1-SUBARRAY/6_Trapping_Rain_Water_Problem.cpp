// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter length :";
// cin>>n;
// int height[n],left_max[n],right_max[n];
// for(int i=0;i<n;i++){
//     cin>>height[i];
// }
// // finding leftmax
// left_max[0]=0;
// for(int i=1;i<n;i++){
//     // if(left_max[i-1]<height[i-1]){
//     //     left_max[i]=height[i-1];
//     // }
//     left_max[i]=max(left_max[i-1],height[i-1]);

// }
// right_max[n-1]=0;
// // right_max[n-1]=INT_MIN;

// for(int i=n-2;i>=0;i--){
//     // if(right_max[i+1]<height[i+1]){
//     //     right_max[i]=height[i+1];
//     // }
//     right_max[i+1]=max(right_max[i+1],height[i+1]);
        
// }

// // printing height ,left_max,rught_max

// cout<<"HEIGHT OF BUILDINGS ARE : ";
// for(int i=0;i<n;i++){
//     cout<<height[i]<<" ";
// }
// cout<<endl;

// cout<<"Left Max Building : ";
// for(int i=0;i<n;i++){
//     cout<<left_max[i]<<" ";
// }
// cout<<endl;

// cout<<"Right Max Building : ";
// for(int i=0;i<n;i++){
//     cout<<right_max[i]<<" ";
// }
// cout<<endl;
// int water=0;
// for(int i=0;i<n;i++){
//     if(min(left_max[i],right_max[i])-height[i]<0){
//         continue;
//     }
//   water+=min(left_max[i],right_max[i])-height[i];
// }
// cout<<"max amount of water is : "<<water;
//     return 0;
// }

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