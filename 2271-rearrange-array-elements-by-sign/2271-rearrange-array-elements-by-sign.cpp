//mycode

// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//       vector<int>pos,neg;
//       int n=nums.size();
      
//       for(int i=0;i<n;i++){
//         if(nums[i]>0){
//             pos.push_back(nums[i]);
//         }
//         else{
//             neg.push_back(nums[i]);
//         }
//       }
//       vector<int>ans;
//       int count1=0,count2=0;
//       while(count1<n/2){
//         ans.push_back(pos[count1]);
//         count1++;
//         ans.push_back(neg[count2]);
//         count2++;
//       }  
//       return ans;
//     }
// };


//better solution
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int posIndex=0, negIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex+=2;
            }else{
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
        }return ans;
    }
};

