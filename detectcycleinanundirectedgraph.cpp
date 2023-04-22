#include <bits/stdc++.h>
using namespace std;

bool searchcycle(int src,int par,vector<int> adj[],vector<int> &vis){
    vis[src]=1;
    for(auto neigh:adj[src]){
        if(!vis[neigh]){
            bool conf=searchcycle(neigh,src,adj,vis);
            if(conf){
                return true;
            }
        }else if(neigh!=par){
            return true;
        }
    }
    return false;

}

bool isCycle(int V, vector<int> adj[])
{
    vector<int> vis(V,0);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            //yaha -1 pass kar rahe kyoki pahle jispe dfs chalega uska parent -1 kar rahe hum log
            bool cycle=searchcycle(i,-1,adj,vis);
            if(cycle){
                return true;
            }
        }
    }
    return false;

}
int main()
{

    return 0;
}