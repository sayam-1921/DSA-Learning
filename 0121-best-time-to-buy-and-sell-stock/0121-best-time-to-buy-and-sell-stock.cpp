class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int n = prices.size();    
    int maxprofit = 0;
    int bestbuy = 0;

    for(int i = 1; i < n; i++)
    {
        if(prices[i] > prices[bestbuy])
        {
            maxprofit = max(maxprofit, prices[i] - prices[bestbuy]);
        }

       if(prices[i] < prices[bestbuy])
        {
            bestbuy = i;
        }
    }
    return maxprofit;
 }   
};