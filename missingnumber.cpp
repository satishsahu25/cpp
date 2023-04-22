#include <bits/stdc++.h>

using namespace std;

 int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int arr[n]={0},ans=0;
        for(auto ele:array){
            arr[ele]=-1;
        }
        for(int i=1;i<n;i++){
            if(arr[i]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }

int main() {

    return 0;
}