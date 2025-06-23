//dutch national flag
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid=0;
        while(mid<=e){ 
            if(nums[mid]==0){
                swap(nums[mid],nums[s]);
                mid++;
                s++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[e]);
                e--;
            }
        }
    }
};
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         //WE HAVE TO JUST SORT IN THIS QUESTION AND NOTHING ELSE
//         // sort(nums.begin(),nums.end());
//         int count0=0,count1=0,count2=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 count0++;
//             }
//         }
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 count1++;
//             }
//         }
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==2){
//                 count2++;
//             }
//         }
//         nums.clear();
//         for(int i=0;i<count0;i++){
//             nums.push_back(0);
//         }
//         for(int i=0;i<count1;i++){
//             nums.push_back(1);
//         }
//         for(int i=0;i<count2;i++){
//             nums.push_back(2);
//         }
//     }
// };
