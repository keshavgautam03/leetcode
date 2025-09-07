// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int profit=0;
//         for(int i=1;i<prices.size();i++){
//             if(prices[i]>prices[i-1]){
//                 profit+=(prices[i]-prices[i-1]);
//             }
//         }
//         return profit;
//     }
// };
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            else{
                ans=max(ans,prices[i]-minPrice);
            }
        }
        return ans;
    }
};
