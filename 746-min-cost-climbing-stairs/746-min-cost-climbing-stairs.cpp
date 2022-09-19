class Solution {
public:
    int helper(vector<int> &cost,int ind,vector<int> &dp){
        if(ind==cost.size()) 
            return 0;
        if(ind>cost.size()) 
            return INT_MAX; 
        if(dp[ind]!=-1) 
            return dp[ind];
        return dp[ind]=cost[ind]+min(helper(cost,ind+1,dp),helper(cost,ind+2,dp));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return min(helper(cost,0,dp),helper(cost,1,dp));
    }
};