class Solution {
public:
    int helper (vector<int>&job,int i,int day,int n,int m,vector<vector<int>>&dp){
        if (day==m && i==n)
            return 0;
        
        if (i==n || day==m)
            return 100000000;
        
        if (dp[i][day]!=-1)
            return dp[i][day];
        
        int ans = INT_MIN;
        int a = INT_MAX;
        for(int j=i;j<n;j++){
            ans = max(ans,job[j]);
            a = min(a,ans+helper(job,j+1,day+1,n,m,dp));
        }
        return dp[i][day] = a;
    }    
    int minDifficulty(vector<int>& job, int d) {
        int n = job.size();
         vector<vector<int>> dp(n,vector<int> (d,-1));
        if (n<d)
            return -1;
        return helper(job,0,0,n,d,dp);
        
    }
};