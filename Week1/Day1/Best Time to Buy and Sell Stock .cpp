class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()){
            return 0;
        }

            int buy = prices[0];
            int profit =0;
            
            for(int i = 1 ; i < prices.size(); i++){
                if(prices[i]< buy ){
                    buy = prices[i];
                }
                else{
                    profit = std::max(profit,prices[i]-buy);
                }
            }
            return profit;
        
    }
};
