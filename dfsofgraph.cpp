#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
vector<int> dfs(int s,vector<int> adj[],vector<int> &vis){
    vis[s]=1;
    cout<<s<<" ";
    ans.push_back(s);
      for(int i=0;i<adj[s].size();i++){
        if(vis[adj[s][i]]==0){
            dfs(adj[s][i],adj,vis);
        }
    }
    return ans;
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    int s = 0;
     vector<int> vis(V,0);
    return dfs(s,adj,vis);
}

int main()
{

    return 0;
}