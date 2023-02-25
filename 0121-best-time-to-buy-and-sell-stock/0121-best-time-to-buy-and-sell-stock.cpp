class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxprofit = 0;
        int p = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            p = min(p, prices[i]);
            maxprofit = max(prices[i] - p, maxprofit);
        }
        return maxprofit;    
    }
};


