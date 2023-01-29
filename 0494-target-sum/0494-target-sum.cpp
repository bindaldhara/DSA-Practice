class Solution {
public:
    int helper(int i,int target,vector<int>&num,vector<vector<int>> &dp){
        if(i==0){
            if(target==0 && num[0]==0)
                return 2;
            if(target==0|| target==num[0])
                return 1;

            return 0;
        }
        if(dp[i][target]!=-1)
            return dp[i][target];
        int notTake=helper(i-1,target,num,dp);
        int take=0;
        if(num[i]<=target)
            take=helper(i-1,target-num[i],num,dp);
        return dp[i][target]=notTake+take;
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
         int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        if(sum-target<0) 
            return 0;
        if((sum-target)%2==1) 
            return 0;
        int s=(sum-target)/2;
         vector<vector<int>> dp(n,vector<int>(s+1,-1));
        return helper(n-1,s,nums,dp);
        
    }
};