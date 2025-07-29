class Solution {
public:
    long long maximumMedianSum(vector<int>& values) {
        sort(values.begin(), values.end());
        long long totalSum = 0;
        int length = values.size();
        for (int index = length - 2; index >= length / 3; index -= 2) {
            totalSum += values[index];
        }
        return totalSum;
    }
};
