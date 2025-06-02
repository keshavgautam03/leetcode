// Dutch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int high=nums.size()-1;
        int mid=0,low=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int zeroes=0;
//         int ones=0;
//         int twos=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 zeroes++;
//             }
//             else if(nums[i]==1){
//                 ones++;
//             }
//             else{
//                 twos++;
//             }
//         }
//         int i = 0;
//         while (zeroes--) nums[i++] = 0;
//         while (ones--) nums[i++] = 1;
//         while (twos--) nums[i++] = 2;
//     }
// };