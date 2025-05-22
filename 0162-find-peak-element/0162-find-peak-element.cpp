class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int high=nums.size()-1;
      int low=0;
      int n=nums.size();
      int mid=low+(high-low)/2;  
      while(low<high){
          mid=low+(high-low)/2;
          if(nums[mid]>nums[mid+1] ){
             high=mid;
          }
          else{
              low=mid+1;
      } 
  }
  return high;
    }
};