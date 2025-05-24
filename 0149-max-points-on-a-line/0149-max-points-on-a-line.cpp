class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if (n <= 2) return n;
        int count=INT_MIN;
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            unordered_map<float,int>mp(n);
            for(int j=i+1;j<n;j++){
                if(points[i][0]==points[j][0]){
                    mp[INT_MIN]++;
                }
                else{
                   float slope=(points[j][1]-points[i][1])*1.0/(points[j][0]-points[i][0]);
                   mp[slope]++;
                }
            }
        
        for(const auto&it : mp){
            if(count<it.second){
                count=it.second;
            }
        }
        int temp=count+1;
        maxi=max(maxi,temp);
        }
        return maxi;
    }
};