class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=INT_MIN; 
        int profit=0; 
        
        for(int i=1; i<prices.size(); i++) {
    
            if(profit>=0)
                profit+=prices[i]-prices[i-1]; 
            else
                profit = prices[i]-prices[i-1]; 
            ans = max(ans, profit); 
            
        }
        
        if(ans<0)
            return 0; 
        return ans; 
    }
};