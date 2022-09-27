class Solution {
public:
    int helper(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()-1)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int curr = 1e9;
        for(int j =1;j<=nums[i];j++){
            curr = min(curr, 1+helper(i+j,nums,dp));
        }
        return dp[i] = curr;
    }
    
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return helper(0,nums,dp);
    }
};