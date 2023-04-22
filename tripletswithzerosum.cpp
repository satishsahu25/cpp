#include<bits/stdc++.h>

using namespace std;

bool triplets(int arr[],int n){
        //**********APPROACH-1************
//if just to check whether triplet exists or not


//         sort(arr,arr+n);

//   vector<int> v;
//     for(int i=0;i<n-2;i++){
//         int sum=-arr[i];
//         int l=i+1;
//         int r=n-1;
//         int flag=0;
//         while(l<r){
//             if(arr[l]+arr[r]==sum){
//                 v.push_back(arr[i]);
//                 v.push_back(arr[l]);
//                 v.push_back(arr[r]);
//                 flag=1;
//                 break;
//             }
//             if(arr[l]+arr[r]>sum){
//                 r--;
//             }else{
//                 l++;
//             }
//         }
//         if(flag==1)
//         break;
//     }

//     // for(int i=0;i<v.size()-2;i++){
//     //     cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<endl;
//     // }

//     return v.size()!=0;







    //**********APPROACH-2************
    // to print also all triplets  and no. of triplets

//     sort(arr,arr+n);

//   vector<int> v;
//     for(int i=0;i<n-2;i++){
//         int sum=-arr[i];
//         int l=i+1;
//         int r=n-1;
//         while(l<r){
//             if(arr[l]+arr[r]==sum){
//                 v.push_back(arr[i]);
//                 v.push_back(arr[l]);
//                 v.push_back(arr[r]);
//             }
//             if(arr[l]+arr[r]>sum){
//                 r--;
//             }else{
//                 l++;
//             }
//         }
//     }

//     for(int i=0;i<v.size()-2;i++){
//         cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<endl;
//     }

//     return v.size()!=0;
}

int main(){
    int n=5;
    int arr[5]={0,-1,2,-3,1};
    if(triplets(arr,5)){
        cout<<endl<<"1";
    }else{
        cout<<endl<<"0";
    }
    return 0;
}