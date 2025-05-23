class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        int s=0,e=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(s<nums1.size() && e<nums2.size()){
            if(nums1[s]==nums2[e]){
                ans.insert(nums1[s]);
                s++;
                e++;
            }
            else if(nums1[s]<nums2[e]){
                s++;
            }
            else{
                e++;
            }
        } 
    vector<int>t(ans.begin(),ans.end());
        return t;
    }
};