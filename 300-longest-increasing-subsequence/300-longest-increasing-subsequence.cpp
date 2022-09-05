class Solution {
public:
    int helper(int i,int j,int n,vector<int>&nums,vector<vector<int>>&dp){
        if(i>=n)
            return 0;
        if(dp[i][j+1]!=-1)
            return dp[i][j+1];
            int totake=helper(i+1,j,n,nums,dp);
        if(j==-1 || nums[i]>nums[j])
            totake=max(totake,1+helper(i+1,i,n,nums,dp));
            return dp[i][j+1]=totake;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return(helper(0,-1,n,nums,dp));
    }
};

