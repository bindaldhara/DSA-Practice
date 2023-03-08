class Solution {
public:
    int helper(int i,int n,vector<int>&dp,vector<int>&nums){
        if(i==n)
            return 0;
        if(i==n-1)
            return nums[n-1];
        if(dp[i]!=-1)
            return dp[i];
        int rob=nums[i]+helper(i+2,n,dp,nums);
        int norob=helper(i+1,n,dp,nums);
        return dp[i]=max(rob,norob);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return helper(0,n,dp,nums);
    }
};



