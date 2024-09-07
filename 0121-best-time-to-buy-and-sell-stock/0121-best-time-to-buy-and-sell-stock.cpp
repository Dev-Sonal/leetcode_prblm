class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int max_profit=0;
       int min_sell=prices[0];
       for(int i=0;i<prices.size();i++){
            min_sell=min(min_sell,prices[i]);
            max_profit=max(max_profit,prices[i]-min_sell);
       } return max_profit;
    }
};