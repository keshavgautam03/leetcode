// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n==1 || n==0){
//             return 1;
//         }
//         // vector<int>dp(n+1);
//         // dp[0]=dp[1]=1; 
//         //only one way to reach index 1 and 0
//         int prev2=1;
//         int prev=1;
//         int curri=0;
//         for(int i=2;i<=n;i++){
//             curri=prev+prev2;
//             prev2=prev;
//             prev=curri;
            
//         }
//         return prev;
//     }
// };

class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }
        vector<int>dp(n+1);
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};