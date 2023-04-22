#include <bits/stdc++.h>
using namespace std;

int canCompleteCircuit(const int A[], int n1, const int B[], int n2) {
    int ans=0,gas=0,arr[n1];
    for(int i=0;i<n1;i++){
            if(A[i]+gas>=B[i]){
            arr[i]=i;
            gas+=A[i]-B[i];
        }else{
            continue;
        }

    }
    return *(min_element(arr,arr+n1));
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    int A[n1],B[n2];
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        A[i]=x;
    }
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        B[i]=x;
    }

    cout<<canCompleteCircuit(A,n1,B,n2);
    return 0;
}


//CORRECT SOLUTION

// int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
//     int i,j,total_extra=0,n=A.size(),x;
// vector<int> extra_gas;
// for(i=0;i<n;i++)
// {
// //x is extra gas at each station
// x=A[i]-B[i];
// extra_gas.push_back(x);
// total_extra+=x;
// }
// if(total_extra<0)
// return -1;
// i=0;
// while(i<n)
// {
// total_extra=0;
// j=i;
// for(j=i;j<i+n;j++)
// {
// int k=j%n;
// total_extra+=extra_gas[k];
// if(total_extra<0)
// {
// i=j+1;
// break;
// }
// }
// if(j==(i+n))
// return i;
// }

// }