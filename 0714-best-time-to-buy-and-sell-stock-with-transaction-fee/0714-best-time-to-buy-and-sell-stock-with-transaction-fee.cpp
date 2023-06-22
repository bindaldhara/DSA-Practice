class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int csell=0,cbuy=INT_MIN;
        for(int i=0;i<prices.size();i++){
            cbuy=max(cbuy,csell-prices[i]);
            csell=max(csell,cbuy+prices[i]-fee);
        }
    return csell;
    }
};