class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int n=height.size();
        int right=n-1;
        int area=0;
        int maxarea=INT_MIN;
        while(right>left){
            area=(right-left)*(min(height[left],height[right]));
            maxarea=max(maxarea,area);
            if(height[right]>height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};