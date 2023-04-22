///////////////change at minimum cost given square into magic square
            // 5 3 4
            // 1 5 8
            // 6 4 2



// int formingMagicSquare(vector<vector<int>> s) {
//     int cost;

//     vector<int> curcost;
//     int eachcost=0;
//     vector<int> given;
//     vector<vector<int>> allsq;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             given.push_back(s[i][j]);
//         }
//     }

//      allsq.push_back({8,1,6,3,5,7,4,9,2});
//      allsq.push_back({6,1,8,7,5,3,2,9,4});
//      allsq.push_back({4,9,2,3,5,7,8,1,6});
//      allsq.push_back({2,9,4,7,5,3,6,1,8});
//      allsq.push_back({8,3,4,1,5,9,6,7,2});
//      allsq.push_back({4,3,8,9,5,1,2,7,6});
//      allsq.push_back({6,7,2,1,5,9,8,3,4});
//      allsq.push_back({2,7,6,9,5,1,4,3,8});

//     for(int i=0;i<8;i++){
//         eachcost=0;
//       for(int j=0;j<9;j++){
//               eachcost+=abs(allsq[i][j]-given[j]);
//       }
//       curcost.push_back(eachcost);
//     }
//      cost=*(min_element(curcost.begin(),curcost.end()));

// return cost;
// }