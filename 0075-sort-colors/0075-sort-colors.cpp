class Solution {
public:
    void sortColors(vector<int>& nums) {
        //WE HAVE TO JUST SORT IN THIS QUESTION AND NOTHING ELSE
        // sort(nums.begin(),nums.end());
        int count0=0,count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count0++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count1++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==2){
                count2++;
            }
        }
        nums.clear();
        for(int i=0;i<count0;i++){
            nums.push_back(0);
        }
        for(int i=0;i<count1;i++){
            nums.push_back(1);
        }
        for(int i=0;i<count2;i++){
            nums.push_back(2);
        }
    }
};