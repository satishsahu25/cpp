#include <bits/stdc++.h>

using namespace std;

int main()
{
    /// O(N^2);

    // int maxi = 0, sum = 0;
    int arr[5] = {-1, -2, -3, -4};
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j < 5; j++)
    //     {
    //             sum += arr[j];
    //             maxi = max(maxi, sum);
    //     }
    //     sum=0;
    // }
    // cout<<maxi;



    // ******for sum only*****

//      long long int csum=arr[0];
//         long long int osum=arr[0];
//    for(int i=1;i<n;i++){
//        if(csum>=0){
//            csum=csum+arr[i];
//        }else{
    //naya subarray suru ho gaya uska sum
//            csum=arr[i];
//        }
//        if(csum>osum){
//            osum=csum;
//        }
//    }
//    return osum;



    // **********to find and print as well************
    //  vector<int> cur;
    // vector<int> best;
    // int curs , bsum ;

    // for (int i = 0; i < 5; i++)
    // {
    //    if(i==0){
    //     cur.push_back(arr[i]);
    //      best.push_back(arr[i]);
    //      curs=arr[i];
    //      bsum=arr[i];
    //    }
    //   else{
    //       curs = curs + arr[i];
    //     if (curs >=arr[i] )
    //     {
    //         cur.push_back(arr[i]);
    //         if (curs > bsum)
    //         {
    //             bsum=curs;
    //             best.clear();
    //             best=cur;
    //         }
    //     }
    //     else
    //     {
    //         cur.clear();
    //         cur.push_back(arr[i]);
    //         curs = arr[i];
    //     }
    //   }
    // }

    // long long summ=0;
    // for(int i=0;i<best.size();i++){
    //    summ=summ+best[i];;
    // }
    // for (auto ele : best)
    // {
    //     cout << ele << " ";
    // }

    return 0;
}