#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];

void dfs(int i,int j,int initialcolor, int newcolor, vector<vector<int>> &image){
    int n=image.size(); //row
    int m=image[0].size(); //col
    if(i<0 || j<0)return;  //invalid edges as go out of matyrix
    if(i>=n || j>=m)return; //invalid edges as go out of matyrix
    if(image[i][j] !=initialcolor)return;


    //if finally its valid edge then we fill it by newcolor
    image[i][j]=newcolor;
    //chnaging color is same as visted marking it

    //running dfs in all four directions
    dfs(i-1,j,initialcolor,newcolor,image);
    dfs(i+1,j,initialcolor,newcolor,image);
    dfs(i,j-1,initialcolor,newcolor,image);
    dfs(i,j+1,initialcolor,newcolor,image);

}

 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int initialcolor=image[sr][sc];
 if(initialcolor!=color)
    dfs(sr,sc,initialcolor,color,image);

return image;
    }


int main(){


    return 0;
}