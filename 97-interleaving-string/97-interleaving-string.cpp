class Solution {
public:
    int dp[201][201];
    bool solve(string s1, string s2, string s3,int n,int m,int k){
        if(k==0) 
            return 1;
        if(dp[n][m]!=-1) 
            return dp[n][m];
        int i=0,j=0;
        if(n-1>=0 and s1[n-1]==s3[k-1])
            i=solve(s1,s2,s3,n-1,m,k-1);
        if(m-1>=0 and s2[m-1]==s3[k-1])
            j=solve(s1,s2,s3,n,m-1,k-1);
        return dp[n][m]=i || j;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length(),m=s2.length(),k=s3.length();
        if(m+n!=k) 
            return 0;
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,s3,n,m,k);
        
    }
};



