#include<bits/stdc++.h>
using namespace std;

// reversed the array and printed also
// if only to print in reverse then int i=N-1;i>=;i-- in for loop

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int l=0, h=N-1;
    while(l<=h){
        int temp;
        temp=arr[l];
        arr[l]=arr[h];
        arr[h]=temp;
        l++;
        h--;
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
