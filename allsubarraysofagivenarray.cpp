#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> v;

void printallaray(int arr[], int s, int e,int k)
{

    for (int i = s; i <= e; i++)
    {
       v[k].push_back(arr[i]);
    }
    

}

void maxSubarraySum(int arr[], int n)
{
    // Your code here
    int k=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i ; j < n; j++)
        {
            printallaray(arr, i, j,k);
            k++;
        }
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    maxSubarraySum(arr, 5);

    for(auto ele:v){
        for(auto ment:ele){
            cout<<ment<<" ";
        }
        cout<<endl;
    }
    return 0;
}