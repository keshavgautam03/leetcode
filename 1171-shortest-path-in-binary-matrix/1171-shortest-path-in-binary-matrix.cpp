class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dist(m,vector<int>(n,1e9));
        queue<pair<int,pair<int,int>>>q;
        if (grid[0][0] != 0 || grid[m-1][n-1] != 0) return -1;
        q.push({1, {0, 0}});
        dist[0][0] = 1;
        vector<int> delr={-1,-1,0,+1,+1,+1,0,-1};
        vector<int> delc={0,+1,+1,+1,0,-1,-1,-1};
        while(!q.empty()){
            int dis=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            if (row == m - 1 && col == n - 1) return dis;
            q.pop();
            for(int i=0;i<8;i++){
                int nrow=row+delr[i];
                int ncol=col+delc[i]; 
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==0
                && dis+1<dist[nrow][ncol]){
                    dist[nrow][ncol]=dis+1;
                    if(nrow==m-1 && ncol==n-1)return dis+1;
                    q.push({dis+1,{nrow,ncol}});
                }
            }
        }
        return -1;

    }
};