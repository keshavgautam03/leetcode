class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxCurr=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<nums.size();i++){
            maxCurr=max(nums[i]+maxCurr,nums[i]);
            maxSum=max(maxSum,maxCurr);
        }
        return maxSum;
    }
};