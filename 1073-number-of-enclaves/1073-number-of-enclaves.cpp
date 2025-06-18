class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>& grid){
        vis[row][col]=1;
        int m=grid.size();
        int n=grid[0].size();
        vector<int>delr={-1,0,+1,0};
        vector<int>delc={0,+1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=delr[i]+row;
            int ncol=delc[i]+col;
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(nrow,ncol,vis,grid);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(!vis[i][0] && grid[i][0]==1){
                dfs(i,0,vis,grid);
            }
            if(!vis[i][n-1] && grid[i][n-1]==1){
                dfs(i,n-1,vis,grid);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[0][i] && grid[0][i]==1){
                dfs(0,i,vis,grid);
            }
            if(!vis[m-1][i] && grid[m-1][i]==1){
                dfs(m-1,i,vis,grid);
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};