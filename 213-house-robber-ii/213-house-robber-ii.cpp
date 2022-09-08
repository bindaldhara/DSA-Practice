class Solution {
public:
   int helper(vector<int> &nums,int i,int n,vector<int> &dp){
        if(i >= n) 
            return 0;
        if(dp[i] != -1) 
            return dp[i];
        
        int rob=nums[i]+helper(nums,i+2,n,dp);
        int norob=helper(nums,i+1,n,dp);
        return dp[i]=max(rob,norob);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        if(n == 1)
            return nums[0];
        int max1 = helper(nums,0,n-1,dp);
        fill_n(dp.begin(), n, -1);
        int max2 = helper(nums,1,n,dp);
        return max(max1, max2);
    }
};

