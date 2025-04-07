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
        int minprice=INT_MAX;
        int maxprice=0;
        for(int price : prices){
            if(price<minprice){
                minprice=price;
            }
            else if((price - minprice)>maxprice){
                maxprice=price - minprice;
            }
        }
        return maxprice;
    }
};
