// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int suml=0;
//         int sumr=0;
//         int i=0;
//         for(int j=2*i;j<nums.size();j++){
//             sumr+=nums[j];
//             i++;
//         }
//         int p=0;
//         for(int j=2*p+1;j<nums.size();j++){
//             suml+=nums[j];
//             p++;
//         }
//         return max(suml,sumr);
//     }
// };

//mamozization

//     int f(int index,vector<int>&dp,vector<int>& nums){
//         if(index<0)return 0;
//         if(index==0)return nums[index];
//         if(dp[index]!=-1)return dp[index];
//         int pick=f(index-2,dp,nums)+nums[index];
//         int notPick=0+f(index-1,dp,nums);
//         return dp[index]=max(pick,notPick);
//     }
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>dp(n,-1);
//         return f(n-1,dp,nums);
//     }
// };

//tabulation with space optimization
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev2=0;
        int prev=nums[0];
        for(int i=1;i<n;i++){
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
};