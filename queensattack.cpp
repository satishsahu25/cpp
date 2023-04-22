#include <bits/stdc++.h>
using namespace std;


//to chekc the move is vlaid ot not isnt going outisde of chess board
int isvalid(int n,int x,int y){
    return (x>0 && x<=n && y>0 && y<=n);
}
///dfs function
int dfs(int n,int x,int y,int xx, int yy,map<pair<int,int>,int> mp){
            // xx and yy agale chaal ke liye hai x/y ko ghatane aur badhane ke liye

    //for squarebox count
    int ans=0;              //check vaha obstacles hai toh nahi
    while(isvalid(n,x,y) && !mp[{x,y}]){
        ans++;
        //usi direction mein chalne dena hai jab tak valid ata hai
        x+=xx;
        y+=yy;
    }
    return ans;

}

int queensattack(int n,int k,int r_q,int c_q, vector<vector<int>> obstacles){
    //changing the coordinates in x and y;
    int xq=r_q; //queens location
    int yq=c_q; //queens location

    map<pair<int,int>,int> mp;
    for(int i=0;i<obstacles.size();i++){
        //local vraiable for obstacles
        int x=obstacles[i][0];
        int y=obstacles[i][1];
        mp[{x,y}]=1; //jaha jaha obstacle hai vaha 1 rakh de rahe hai
    }
    // x mien + means down and y mein + means right
    //x mein - means up and y mein - means left
    //8 direction mein dfs run kar diya
    int ans=0;
    ans+=dfs(n,xq-1,yq,-1,0,mp); //up
    ans+=dfs(n,xq+1,yq,1,0,mp); //down
    ans+=dfs(n,xq,yq-1,0,-1,mp); // left
    ans+=dfs(n,xq,yq+1,0,1,mp); //right

    ans+=dfs(n,xq-1,yq+1,-1,1,mp); //north east
    ans+=dfs(n,xq-1,yq-1,-1,-1,mp); //north west
    ans+=dfs(n,xq+1,yq-1,1,-1,mp); //south east
    ans+=dfs(n,xq+1,yq+1,1,1,mp); // south west

return ans;

}



int main() {


    return 0;
}