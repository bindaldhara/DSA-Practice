class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int diff = *max_element(nums.begin(),nums.end())-*min_element(nums.begin(),nums.end());
        int temp = max(*max_element(nums.begin(),nums.end()),-*min_element(nums.begin(),nums.end()));
            
        vector<vector<int> > dp(nums.size(),vector<int>(temp*2+2,1));
            for(int i = 0;i<dp[0].size();i++)
                dp[0][i] = 1;
        int ans = 1;
        for(int i = 1;i<nums.size();i++)
        {
        vector<int>temp = dp[i];
            for(int j = i-1;j>=0;j--)
            {
              int d = nums[i]-nums[j]+diff;
                dp[i][d] = max(dp[i][d],temp[d]+ dp[j][d]);
                ans = max(ans,dp[i][d]);
            }
        }
    
        return ans;
    }
};