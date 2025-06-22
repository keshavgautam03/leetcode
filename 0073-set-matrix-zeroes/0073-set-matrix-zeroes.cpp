class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>>vec;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    vec.push_back({i,j});
                }
            }
        }
        for(int i=0;i<vec.size();i++){
            int t=vec[i].first;
            for(int j=0;j<n;j++){               
                matrix[t][j]=0;
            }
        }
        for(int i=0;i<vec.size();i++){
            int t=vec[i].second;
            for(int j=0;j<m;j++){    
                matrix[j][t]=0;
            }
        }
    }
};