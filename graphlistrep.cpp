#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
bool vis[N];


void dfs(int vertex){
    //after entering vertex

    ///******here 1 or 2 condition can be used ata a time *******

    ///2******** if(vis[vertex]) return

    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child:g[vertex]){
        cout<<"par"<<vertex<<", child"<<child<<endl;
        //after entering the child
       /// 1*********** if(vis[child]) continue;
      if(vis[child]) continue;
        dfs(child);
        //after leaving the child
    }
    //after leaving the vertex
}





int main(){
    //n vertices & m edges
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(1);

    return 0;
}