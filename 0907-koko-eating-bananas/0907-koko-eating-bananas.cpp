class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {
        int e=*max_element(piles.begin(),piles.end());
        int s=1;
        int n=piles.size();
        while(s<e){
            int mid=s+(e-s)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                // sum+=ceil((double)piles[i]/mid);
                sum += (piles[i] + mid - 1) / mid;
            }
            if(sum>h){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
    }
};