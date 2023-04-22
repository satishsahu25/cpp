#include <bits/stdc++.h>
using namespace std;
 int peakElement(int arr[], int n)
    {
       int mid=n/2;
       int start=0;
       int end=n-1;
       int ans;
       while(start<=end){

        if(mid!=0){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                     ans=mid;
                     break;
            }else if(arr[mid]>arr[mid+1]){
                start=mid+1;
            }else if(arr[mid]>arr[mid-1]){
                end=mid-1;
            }
        }

        if(mid==0){
            if(arr[0]>arr[1]){
                    ans=0;
                    break;
            }else{
                ans=1;
            }
        }

        if(mid==n-1){
            if(arr[mid]>arr[mid-1]){
                ans=mid;
                break;
            }else{
                ans=mid-1;;
            }
        }

       }

    return arr[ans];
    }

int main() {



    return 0;
}