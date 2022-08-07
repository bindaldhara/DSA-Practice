class Solution {
public:
   int dp[100001];
    bool solve(vector<int>& nums,int i){
        if(i>=nums.size())
            return true;
        if(dp[i]!=-1)
            return dp[i];
        if(i+1<nums.size()){
            if(nums[i]==nums[i+1]){
                if(solve(nums,i+2))
                    return dp[i]=true;
            }
        }
        if(i+2<nums.size()){
            if(nums[i]==nums[i+1] && nums[i+1]==nums[i+2]){
                if(solve(nums,i+3))
                    return dp[i]=true;
            }
            if(nums[i]+1==nums[i+1] && nums[i+1]+1==nums[i+2]){
                if(solve(nums,i+3))
                    return dp[i]=true;
            }
        }
        return dp[i]=false;
    }
    bool validPartition(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
        
    }
};