class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>dist(m,vector<int>(n,0));
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        vector<int>delr={+1,0,-1,0};
        vector<int>delc={0,+1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            dist[row][col]=dis;
            for(int i=0;i<4;i++){
                int nrow=delr[i]+row;
                int ncol=delc[i]+col;
                if(nrow<m && ncol<n && nrow>=0 && ncol>=0 && vis[nrow][ncol]==0){
                    vis[nrow][ncol]=1;
                    q.push({{nrow,ncol},dis+1});
                }
                
            }
            
        }
        return dist;
    }
};