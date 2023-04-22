#include <bits/stdc++.h>
using namespace std;
void  nineDivisors(long long int N){
        //Code Here
        long long int n=sqrt(N);
        long long int arr[(long long int)n+1];
        for(long long int i=1;i<=n;i++){
            arr[i]=i;
        }
        //prime multiple ke indexes par prime numbers aajayenge
        for(long long int i=2;i<=n;i++){
            if(arr[i]==i){
                for(long long int j=i*i;j<=n;j+=i){
                    if(arr[j]==j){
                        arr[j]=i;
                    }
                }
            }
        }
        long long int count=0;
       set<long long int> set;
    for(long long int i=2;i<=n;i++){
        long long p=arr[i];
        long long q=arr[(long long int)i/arr[i]];
        if(p!=q && q!=1 && p*q==i){
            count++;
            set.insert(p*p*q*q);
        }else if(pow(arr[i],8)<=N){
            count++;
            set.insert(pow(arr[i],8));
        }
    }
    for(auto ele:set){
        cout<<ele<<" ";
    }
    }


int main() {
    nineDivisors(1000);
    return 0;
}