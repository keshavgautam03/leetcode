class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>vec;
        int col=matrix.size();
        int row=matrix[0].size();
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(matrix[i][j]==0){
                    vec.push_back({i,j});
                }
            }
        }
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<row;j++){
                int t=vec[i].first;
                matrix[t][j]=0;
            }
        }
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<col;j++){
                int p=vec[i].second;
                matrix[j][p]=0;
            }
        }

    }
};