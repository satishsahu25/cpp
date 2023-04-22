#include<bits/stdc++.h/>
using namespace std;
const int N=1e3+10;
///declaring variable globally is already initialised with zero.
int graph[N][N]; //O(N^2) space complexity

int main(){
    //n vertices & m edges
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }

    return 0;
}