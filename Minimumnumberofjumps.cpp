#include<bits/stdc++.h>
using namespace std;

  int minJumps(int arr[], int n){
        // Your code here
   int maxR=a[0];
   int step=a[0];
   int jump=1;
   if(n==1) return 0;
   else if(a[0]==0) return -1;
   else{
    ///jab size 1 se bdaa hai aur hum aage badh pa rahe hai
    for(int i=1;i<n;i++){
        //loop to check from every element how max we can reach
        if(i==n-1) return jump;
        maxR=max(maxR,i+arr[i]);
        step--;
        if(step==0){
            jump++;
            if(i>=maxR){
                return -1;
            }
            step=maxR-i;
        }

    }

   }
    }

int main(){

    int arr={1,3,5,8,9,2,6,7,6,8,9};
    int n=11;
    cout<<minJumps(arr,n);

    return  0;
}