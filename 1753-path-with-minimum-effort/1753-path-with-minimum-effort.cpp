class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        int m=heights.size();
        int n=heights[0].size();
        vector<vector<int>> dist(m, vector<int>(n, 1e9));
        dist[0][0]=0;
        pq.push({0,0,0});
        vector<int>delr={-1,0,+1,0};
        vector<int>delc={0,+1,0,-1};
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int effort=it[0];
            int row=it[1];
            int col=it[2];
            if (row == m - 1 && col == n - 1) {
                return effort;
            }
            for(int i=0;i<4;i++){
                int nrow=delr[i]+row;
                int ncol=delc[i]+col;
                
                if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n){
                    int currEffort=max(effort,abs(heights[nrow][ncol]-heights[row][col]));
                    if(currEffort<dist[nrow][ncol]){
                        dist[nrow][ncol]=currEffort;
                        pq.push({currEffort, nrow, ncol});
                    }
                }
                
            }
        }
        return 0;
    }
};