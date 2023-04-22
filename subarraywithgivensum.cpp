#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
    {
      long long curr_sum=0;
      int i,j;
    // Pick a starting point
    vector<int> res;
    for (i = 0; i < n; i++) {
        curr_sum = arr[i];

        // try all subarrays starting with 'i'
        for (j = i + 1; j <= n; j++) {
            if (curr_sum == s) {
               res.push_back(i+1);
               res.push_back(j);
                return res;
            }
            if (curr_sum > s || j == n)
                break;
            curr_sum = curr_sum + arr[j];
        }
    }

    res.push_back(-1);
        return res;

     }

int main() {
    int arr[10]={1,2,3,4,5};
    subarraySum(arr,5, 15);
    return 0;
}