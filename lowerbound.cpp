#include <bits/stdc++.h>
using namespace std;

/// WITH VECTOR
int main()
{
    int N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int numq;
    cin >> numq;
    int ar[numq];
    for (int i = 0; i < numq; i++)
    {
        cin >> ar[i];
    }
    for(int i=0;i<numq;i++){
        vector<int> :: iterator it=lower_bound(v.begin(),v.end(),ar[i]);
        if(v[it-v.begin()]==ar[i]){
            cout<<"Yes "<<it-v.begin()<<endl;
        }else{
            cout<<"No "<<it-v.begin()<<endl;
        }
    }
    return 0;
}

// *************W/O VECTOR*******************

// void lowerbound(int x,int a[],int N){
//     for(int i=0;i<N;i++){
//         if(x==a[i]){
//             cout<<"Yes"<<" "<<i+1<<endl;
//             break;
//         }
//         if(a[i]>x){
//             cout<<"No"<<" "<<i+1<<endl;
//             break;
//         }
//     }
// }

// int main() {
//     int N;
//     cin>>N;
//     int arr[N];
//     for(int i=0;i<N;i++){
//         cin>>arr[i];
//     }
//     int q;
//     cin>>q;
//     int arr2[q];
//     for(int i=0;i<q;i++){
//         cin>>arr2[i];
//     }

//     for(int i=0;i<q;i++){
//         lowerbound(arr2[i],arr,N);
//     }

//     return 0;
// }