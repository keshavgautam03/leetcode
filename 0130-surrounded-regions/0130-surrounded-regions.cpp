class Solution {
public:
    void dfs(vector<vector<int>>&vis,vector<vector<char>>&board,int row,int col,vector<int>delr,vector<int>delc,int m, int n){
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+delr[i];
            int ncol=col+delc[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] &&
             board[nrow][ncol]=='O'){
                dfs(vis,board,nrow,ncol,delr,delc,m,n);
             }
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<int>delc={0,+1,0,-1};
        vector<int>delr={-1,0,+1,0};
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(!vis[i][0] && board[i][0]=='O'){
                dfs(vis,board,i,0,delr,delc,m,n);
            }
            if(!vis[i][n-1] && board[i][n-1]=='O'){
                dfs(vis,board,i,n-1,delr,delc,m,n);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[0][i] && board[0][i]=='O'){
                dfs(vis,board,0,i,delr,delc,m,n);
            }
            if(!vis[m-1][i] && board[m-1][i]=='O'){
                dfs(vis,board,m-1,i,delr,delc,m,n);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]!=1 && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};