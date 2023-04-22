#include<bits/stdc++.h>
using namespace std;

///working

    void dfs(int src,stack<int> &s,vector<int> &vis,vector<int> adj[]){

        vis[src]=1;
        for(auto ele:adj[src]){
            if(!vis[ele]){
                dfs(ele,s,vis,adj);

            }else{
                continue;
            }
        }
        //ek dum se extremities se lautne par hi push kar rahe hai
         s.push(src);


    }



	vector<int> topoSort(int V, vector<int> adj[])
	{
	    // code here
        vector<int> vis(V,0);
        stack<int> s;
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,s,vis,adj);
            }

        }
    while(!s.empty()){
        ans.push_back(s.top());
         s.pop();
    }

    return ans;

	}


int main(){



    return  0;
}