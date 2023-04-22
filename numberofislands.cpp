#include <bits/stdc++.h>
using namespace std;

// ******************MY TRY***************

// int check(int row, int col, int indisize, vector<vector<char>> &grid, vector<vector<int>> &grid2, int i, int j)
// {
//     queue<pair<int, int>> q;
//     q.push({i, j});
//     grid2[i][j] = 1;
//     while (!q.empty())
//     {
//         auto it = q.front();
//         q.pop();
//         int a = it.first;
//         int b = it.second;
//         vector<pair<int, int>> loc = {{1, 1}, {-1, -1}, {1, 0}, {0, 1}, {-1, 1}, {1, -1}, {0, -1}, {1, 0}, {0, 0}};
//         for (int ind = 0; ind < 9; ind++)
//         {
//             int x = a + loc[ind].first;
//             int y = b + loc[ind].second;
//             if (x >= 0 && x < row && y >= 0 && y < col && grid2[x][y] == 0 && grid[x][y] == '1')
//             {
//                 q.push({x, y});
//                 grid2[x][y] = 1;
//                 indisize++;
//             }
//         }
//     }
//     return indisize;
// }

// int numIslands(vector<vector<char>> &grid)
// {
//     // Code here
//     int col = grid[0].size();
//     int row = grid.size();
//     vector<vector<int>> grid2(row, vector<int>(col, 0));
//     vector<int> issizes;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             int indisize = 0;
//             if (check(row, col, indisize, grid, grid2, i, j) != 0)
//                 issizes.push_back(check(row, col, indisize, grid, grid2, i, j));
//         }
//     }

//     return issizes.size();
// }

// *****************CORRECT SOLUTION***************

// ********by*DFS**

// void dfs(int i,int j,vector<vector<int>> &vis,vector<vector<char>> &grid,int row,int col){
//     if(i<0 || j<0 || i>row-1 || j>col-1) return ;
//     if(grid[i][j]=='0') return ;
//     if(!vis[i][j]){
//         vis[i][j]=1;

//         dfs(i+1,j+1,vis,grid,row,col);
//         dfs(i-1,j+1,vis,grid,row,col);
//         dfs(i+1,j-1,vis,grid,row,col);
//         dfs(i-1,j-1,vis,grid,row,col);

//         dfs(i+1,j+0,vis,grid,row,col);
//         dfs(i-1,j+0,vis,grid,row,col);
//         dfs(i+0,j+1,vis,grid,row,col);
//         dfs(i+0,j-1,vis,grid,row,col);
//     }
// }

// int numIslands(vector<vector<char>> &grid)
// {
//     int row=grid.size();
//     int col=grid[0].size();
//     int c=0;
//     vector<vector<int>> vis(row,vector<int>(col,0));
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(vis[i][j]!=1&&grid[i][j]!='0'){
//                 dfs(i,j,vis,grid,row,col);
//                 c++;
//             }
//         }
//     }
//     return c;
// }





// *****************TO BE CHECKED/confirmed by bfs****************


// *******************by BFS*******************

int bfs(int i, int j,int indisize, vector<vector<int>> &vis, vector<vector<char>> &grid, int row, int col)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j]=1;
    indisize++;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int a = it.first;
        int b = it.second;
        vector<pair<int, int>> loc = {{1, 1}, {-1, -1}, {1, 0}, {0, 1}, {-1, 1}, {1, -1}, {0, -1}, {1, 0}};
        for (int ind = 0; ind < 8; ind++)
        {
            int x = a + loc[ind].first;
            int y = b + loc[ind].second;
            if (x >= 0 && x < row && y >= 0 && y < col && grid[x][y] == '1' && vis[x][y] == 0){
                q.push({x,y});
                vis[x][y]=1;
                indisize++;
            }
        }
    }
    return indisize;
}
    int numIslands(vector<vector<char>> & grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        int c = 0;
        vector<int> sizes;
        vector<vector<int>> vis(row, vector<int>(col, 0));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
               int  indisize=0;
                if (grid[i][j] == '1'&&vis[i][j]==0)
                {
                   sizes.push_back( bfs(i, j, indisize,vis, grid, row, col));
                    c++;
                }
            }
        }
        return c;
    }

    int main()
    {

        return 0;
    }