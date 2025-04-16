// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int m = nums1.size();
//         int n = nums2.size();

        
//         std::vector<int> merged(m + n);

//         int i = 0, j = 0, k = 0;

        
//         while (i < m && j < n) {
//             if (nums1[i] <= nums2[j]) {
//                 merged[k++] = nums1[i++];
//             } else {
//                 merged[k++] = nums2[j++];
//             }
//         }

      
//         while (i < m) {
//             merged[k++] = nums1[i++];
//         }

        
//         while (j < n) {
//             merged[k++] = nums2[j++];
//         }

  
//         if ((m + n) % 2 == 1) {
            
//             return merged[(m + n) / 2];
//         } else {
            
//             int mid1 = (m + n) / 2;
//             int mid2 = mid1 - 1;
//             return (merged[mid1] + merged[mid2]) / 2.0;
//         }
//     }
// };


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v;
        
        for (auto num : nums1) 
            v.push_back(num);
        
        for (auto num : nums2) 
            v.push_back(num);
        
        
        sort(v.begin(), v.end()); 
        
        
        int n = v.size(); 
        
        if (n % 2 == 1) {
            
            return v[n / 2];
        } else {
            
            int mid1 = n / 2 - 1;
            int mid2 = n / 2;
            return (v[mid1] + v[mid2]) / 2.0;
        }
    }
};



