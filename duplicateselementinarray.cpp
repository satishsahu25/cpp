#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> m;
vector<int> duplicates(int arr[], int n)
{
    // code here


    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    vector<int> dup;
    for(auto ele:m){
        if(ele.second>1){
            dup.push_back(ele.first);
        }
        cout<<ele.first<<"x";
    }
    vector<int> ans;
    if(dup.size()!=0){
        ans=dup;
    }else{
        ans.push_back(-1);
    }
    return ans;

}

int main()
{
    int n=7;
    int arr[n]={0,1,3,3,3,2,2};
    vector<int> v=duplicates(arr,n);
    for(auto ele:v){
        cout<<"z"<<ele;
    }
    return 0;
}