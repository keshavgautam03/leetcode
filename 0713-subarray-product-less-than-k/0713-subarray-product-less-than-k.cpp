class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;

        int i=0,j=0;
        long long mul=1;
        while(j<n){
            mul*=nums[j];
            while(i<=j && mul>=k){
                mul/=nums[i];
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }
};