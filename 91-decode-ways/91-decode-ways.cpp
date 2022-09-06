class Solution {
public:
    int helper(int i,int n,string s,vector<int> &dp) {
        if(i == n) return 1;
        if(s[i] == '0') return 0;
        if(dp[i] != -1) return dp[i];
        
        int one = helper(i+1, n, s, dp);
        int two= 0;
        if((i+1<=n-1) && (10*(s[i]-'0')+(s[i+1]-'0'))<=26)
            two = helper(i+2, n, s, dp);
        return dp[i] = one+two;
    }
	
	int numDecodings(string s) { 
		vector<int> dp(s.size(),-1);
        int n=s.size();
		return helper(0,n,s,dp);
    }
};


