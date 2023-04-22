#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
bool vis[N];
vector<int> current;
vector<vector<int>> v;
//dfs
void dfs(int vertex){
    vis[vertex]=true;
    current.push_back(vertex);
    for(int child : g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}

int main(){
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ct=0;
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        current.clear();
        dfs(i);
        v.push_back(current);
        ct++;
    }
    for(auto com:v){
        for(int verte:com){
            cout<<verte<<" ";
        }
        cout<<endl;
    }

    return 0;
}