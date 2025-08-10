class Solution {
public:
    //khatarnaak logic bro keep it up
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>vec;
        // pushing the same vector elements in the vector at the end
        for(int i =0;i<2*n;i++){
            vec.push_back(nums[i%n]);
        }
        for(int i =0;i<2*n-1;i++){
            if(nums[i%n]>nums[(i+1)%n]){
                count++;
            }
            continue;
        }
        if(count<=2)return true;
        else return false;
    }
};