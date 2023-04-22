// ********************TRY****************
// #include <bits/stdc++.h>

// using namespace std;

// int pickingNumbers(vector<int> a) {

//     //  int arr[6] = {4, 6, 5, 3, 3, 1};
//     vector<int> arr=a;
//     int i, j;
//     vector<int> dist;
//     for (i = 0; i < a.size(); i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             if(arr[i]==arr[j]) break;
//         }
//         if(i==j) dist.push_back(arr[i]);
//     }

//     int len=dist.size();
//     vector<int> count;
//     int cnt;
//     for(int i=0;i<len;i++){
//         cnt=0;
//         for(int j=0;j<a.size();j++){
//             if(abs(dist[i]+1)==arr[j] || abs(dist[i]-1)==arr[j] || dist[i]-arr[j]==0){
//                 cnt++;
//             }
//         }
//         count.push_back(cnt);
//     }
//     int max=*(max_element(count.begin(),count.end()));
// return max;

// }

//////////////simple logic works////////

// int pickingNumbers(vector<int> a) {
// vector<int> v(101,0);
//  for(auto ele:a){
//      v[ele]=count(a.begin(),a.end(),ele);
//  }
//  int res=0;
//  for(int i=1;i<101;i++){
//      res=max(res,v[i]+v[i-1]);
//  }

//  return res;
// }
