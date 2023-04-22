#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans=0;
    unordered_map<int,int> Map(0);
    //0 sum ek baar aya hai
    Map.insert(0,1);
    int n=10;
    int sum=0;
    int target=6;
    int arr[n]={3,0,1,2,0,0,6,0,1,5};
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(Map.find(sum-target)!=Map.end()){
            ans+=Map[sum-target];
        }
        Map.insert(sum,Map[sum]+1);
    }
    cout<<ans;

    return 0;
}