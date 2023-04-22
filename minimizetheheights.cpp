#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
      sort(arr,arr+n);
    // code here
    int minele;
    int maxele;
    int result=arr[n-1]-arr[0]; //b-a

    for(int i=1;i<n-1;i++){
        //arr[i-1]=x
        //arr[i]=y

        if(arr[i]>=k){
            minele=min(arr[0]+k,arr[i]-k);
            //lhs wale ko max banne ka chance hai isse i-1
            maxele=max(arr[i-1]+k,arr[n-1]-k);
            result=min(result,maxele-minele);
        }
    }

return result;
}

int main()
{

    int arr[5]={3,9,12,16,20};
    cout<<getMinDiff(arr,5,3);
    return 0;
}