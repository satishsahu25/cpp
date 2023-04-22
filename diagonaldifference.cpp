#include <bits/stdc++.h>
using namespace std;
//Primary diagonal
    // 11
    //    5
    //      -12
//Secondary diagonal
//        4
//     5
// 10

int diagonaldiff(vector<vector<int>> &v){
   int p=0,s=0;
    int r1=0, c1=0;
     while((r1<=(v[0].size()-1)) && (c1<=(v[0].size()-1))){
        p+=v[r1][c1];
        r1++;
        c1++;
    }
    int r=0,c=v[0].size()-1;
    while((r<=(v[0].size()-1)) && (c>=0)){
        s+=v[r][c];
        r++;
        c--;
    }
    return abs(p-s);

}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j];
        }
    }
    // cout<<diagonaldiff(v);
    return 0;
}