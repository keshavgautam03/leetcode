class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
      vector<int>ans(n);
      int p1=1;
      vector<int>prefixProduct(n);
      for(int i=0;i<n;i++){ 
        prefixProduct[i]=p1;
        p1*=nums[i];
      }
      int suffix = 1;
      for(int i=n-1;i>=0;i--){
        
        ans[i]= prefixProduct[i]*suffix;
        suffix *= nums[i];
      }
      return ans;
    }
};