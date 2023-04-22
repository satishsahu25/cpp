#include <bits/stdc++.h>

using namespace std;

int main() {

    int arr[6]={7,10,4,3,20,15};
    int k=5;
    priority_queue<int> maxh;
    for(auto ele:arr){
        maxh.push(ele);
        if(maxh.size()>k){
            maxh.pop();
        }
    }

    cout<<maxh.top();
    return 0;
}