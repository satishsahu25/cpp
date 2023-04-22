// unordered_map<int, int> mp;

// int nonDivisibleSubset(int k, vector<int> s) {


//      for(int i=0;i<k;i++){
//         mp[i]=0;
//     }

//     for(auto ele:s){
//         mp[ele%k]++;
//     }
//      int ma=0;
//      if(mp[0]!=0){
//          ma=1;
//      }
//     for(int i=1;i<(k/2)+1;i++){
//         if(i!=k-i){
//             ma+=max(mp[i],mp[k-i]);
//         }else{
//             ma++;
//         }
//     }
//     // for(int i=0;i<k;i++){
//     //     cout<<i<<"x"<<mp[i]<<endl;
//     // }

//     return ma;

// }