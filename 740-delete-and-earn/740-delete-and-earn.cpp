class Solution {
public:
    const int N = (1e5 + 1);
    int deleteAndEarn(vector<int>& nums) {
        vector<int> mp(N, 0);
        int dp[N];
        for(auto num : nums)
            mp[num]++;
        dp[0] = 0;
        dp[1] = mp[1];
        for(int i=2;i<N;i++)
            dp[i] = max(dp[i-2]+i*mp[i], dp[i-1]);
        
      return dp[N-1];
    }
};