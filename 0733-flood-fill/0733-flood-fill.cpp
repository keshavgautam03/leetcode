class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        queue<pair<int,int>>q;
        int initialcolor=image[sr][sc];
        if (initialcolor == color) return image;
        q.push({sr,sc});
        vector<int>delr={-1,0,+1,0};
        vector<int>delc={0,+1,0,-1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            image[row][col]=color;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=delr[i]+row;
                int ncol=delc[i]+col;

                if(nrow<m && nrow>=0 && ncol>=0 && ncol<n
                 && image[nrow][ncol]==initialcolor){
                    q.push({nrow,ncol});
                }
            }
        }
        
        return image;
        
    }
};