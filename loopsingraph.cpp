#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
bool vis[N];

//dfs
bool dfs(int vertex,int par){
    vis[vertex]=true;
    bool isloop=false;
    for(int child : g[vertex]){
        if(vis[child] && child==par) continue;
        if(vis[child]) return true;
        isloop|=dfs(child,vertex);
    }
    return isloop;
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
bool isloop=false;
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        if(dfs(i,0)){
            isloop=true; //ek bhi loop milte hifor loop se bahar aayjayenge
            break;
        }
         //0 is liye pass kar rahe ki 0 toh koi node hi nahi hai toh hamari 13th line wala code chal jayega

    }
    cout<<isloop<<endl;


    return 0;
}