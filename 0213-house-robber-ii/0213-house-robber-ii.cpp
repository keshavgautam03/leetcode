class Solution {
public:
    int robWithoutLast(vector<int>& nums) {
        int n=nums.size();
        int prev2=0;
        int prev=nums[0];
        for(int i=1;i<n-1;i++){
            int take=nums[i];
            if(i>1){
                take+=prev2;
            }
            int notTake=prev;
            int curri=max(take,notTake);
            prev2=prev;
            prev=curri;
            
        }
        return prev;
    }
    int robWithoutFirst(vector<int>& nums) {
        int n=nums.size();
        int prev2=0;
        int prev=nums[1];
        for(int i=2;i<n;i++){
            int take=nums[i]+prev2;
            int notTake=prev;
            int curri=max(take,notTake);
            prev2=prev;
            prev=curri;
            
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        return max(robWithoutLast(nums),robWithoutFirst(nums));
    }
};