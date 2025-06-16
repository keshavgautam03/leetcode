class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>dist(m,vector<int>(n,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    dist[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        vector<int>delr={-1,0,+1,0};
        vector<int>delc={0,+1,0,-1};
        while(!q.empty()){
            auto [row,col]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delr[i];
                int ncol=col+delc[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && dist[nrow][ncol]==-1){
                    dist[nrow][ncol]=dist[row][col]+1;
                    q.push({nrow,ncol});
                }
            }
        }
        return dist;
    }
};