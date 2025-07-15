class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      queue<int>pos,neg;
      int n=nums.size();
      
      for(int i=0;i<n;i++){
        if(nums[i]>0){
            pos.push(nums[i]);
        }
        else{
            neg.push(nums[i]);
        }
      }
      vector<int>ans;
      while(!neg.empty() || !pos.empty()){
        ans.push_back(pos.front());
        pos.pop();
        ans.push_back(neg.front());
        neg.pop();
      }  
      return ans;
    }
};