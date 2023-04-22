#include<bits/stdc++.h>
using namespace std;

 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector<int> ans;
        queue<int>q;

        q.push(0);
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            ans.push_back(curr);
            for(int i=0;i<adj[curr].size();i++){
                if(vis[adj[curr][i]]==0){
                    q.push(adj[curr][i]);
                    vis[adj[curr][i]]=1;
                }
            }
        }
        return ans;
    }

int main(){


    return  0;
}