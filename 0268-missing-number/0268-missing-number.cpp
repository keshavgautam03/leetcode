//efficient solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i=1;i<=n;i++){
        ans=ans^i;
       }
       for(int i=0;i<n;i++){
        ans=ans^nums[i];
       }
       return ans;
    }
};
//chutiya solution
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
        
//         if(nums[0]!=0){
//             return 0;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=i){
//                 return i;
//             }
            
            
//         }
//          return nums.size();
//     }
// };