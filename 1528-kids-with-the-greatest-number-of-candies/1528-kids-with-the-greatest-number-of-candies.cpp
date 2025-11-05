class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto maxi=max_element(candies.begin(),candies.end());
        int maxCandies=*maxi;
        int n=candies.size();
        vector<bool>ans(n);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxCandies){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
    }
};