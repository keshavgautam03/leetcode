class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
            
        }
        return j;
        // set<int> s(nums.begin(),nums.end());
        // nums.clear();
        
        // for(const int& it : s){
        //     nums.push_back(it);
        // }
        // return nums.size();
    }
};