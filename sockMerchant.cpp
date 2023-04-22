// int sockMerchant(int n, vector<int> ar) {
//     int pairs=0;
//     map<int,int> m;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         if((m.find(ar[i])==m.end())){
//             m[ar[i]]=count(ar.begin(),ar.end(),ar[i]);
//             v.push_back(ar[i]);
//         }
//     }

//     int len=v.size();
//      for(int i=0;i<len;i++){

//              pairs+=m[v[i]]/2;

//     }
//     return pairs;
// }