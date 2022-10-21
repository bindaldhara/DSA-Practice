class Solution {
public:
    bool subsetSum(vector<int>&nums,int n,int sum,vector<vector<int>>&dp) {
		if (sum == 0) return true;
		if (n == 0) 
			return false;
		if (dp[n][sum] != -1) 
			return dp[n][sum];
		if (nums[n - 1] <= sum) 
			return dp[n][sum] = subsetSum(nums,n - 1,sum-nums[n - 1],dp) || subsetSum(nums,n - 1,sum,dp);
		return dp[n][sum] = subsetSum(nums, n - 1, sum, dp);
	}

	bool canPartition(vector<int>& nums) {
		const int N = nums.size();
		int sum = 0;
		for (int i = 0; i < N; i++)
			sum += nums[i];
		if (sum % 2 == 1) return false;
		sum /= 2;
		vector<vector<int>> dp(N + 1, vector<int>(sum + 1, -1));
		return subsetSum(nums, N, sum, dp);
    }
};

