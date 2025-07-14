// class Solution {
// public:
//     int find_min(vector<int> arr, int n) {
//         int min = INT_MAX;
//         for(int i = 0; i<n; i++) {
//             if(arr[i] <= min) min = arr[i];
//         }
//         return min;
//     }

//     int find_max(vector<int> arr, int n) {
//         int max = INT_MIN;
//         for(int i = 0; i<n; i++) {
//             if(arr[i] >= max) max = arr[i];
//         }
//         return max;
//     }


//     bool possible(vector<int> arr, int day, int m, int k) {
//         int n = arr.size(), cnt = 0, no_of_boq = 0;
//         for(int i = 0; i<n; i++) {
//             if(arr[i] <= day) cnt++;
//             else {
//                 no_of_boq += cnt/k;
//                 cnt = 0;
//             }
//         }
//         no_of_boq += cnt/k;
//         return no_of_boq >= m;
//     }
//     int minDays(vector<int>& bloomDay, int m, int k) {
//         int n = bloomDay.size();
//         long long val = m * 1LL * k * 1LL;
//         if(val > bloomDay.size()){
//             return -1;
//         }
//         int low = find_min(bloomDay, n), high = find_max(bloomDay, n); 
//         int ans = high;
//         while(low<=high) {
//             int mid = low + (high-low)/2;
//             if(possible(bloomDay, mid, m, k) == true) {
//                 ans = mid;
//                 high = mid-1;
//             }
//             else {
//                 low = mid+1;
//             }
//         }
//         return ans;

//     }
// };
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long)m * k > bloomDay.size()) return -1;

        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isValid(bloomDay, m, k, mid)) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }

    bool isValid(vector<int>& bloomDay, int m, int k, int mid) {
        int bouquets = 0, flowers = 0;
        for (int day : bloomDay) {
            if (day <= mid) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                    if (bouquets >= m) return true;
                }
            } else {
                flowers = 0;
            }
        }
        return false;
    }
};