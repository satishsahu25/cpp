#include <bits/stdc++.h>
using namespace std;

   map<int,int> m;
  int majorityElement(int a[], int size)
    {
        int rep=size/2,ans;
        for(int i=0;i<size;i++){
            m[a[i]]++;
        }
        for(auto ele:m){
            if(ele.second>rep){
                ans=ele.first;
            }
        }
        return ans;
    }

int main() {



    return 0;
}