class Solution {
public:
    int helper(int i, int j, string &s, string &t, vector<vector<int>>&dp){
        if(i<0) 
            return j+1;
        if(j<0)
            return i+1;
        int res=0;
        if(dp[i][j]!=-1) 
            return dp[i][j];
        if(s[i]==t[j]) 
            res=helper(i-1,j-1,s,t,dp);
        else{
            res=1+min(helper(i-1,j-1,s,t,dp),min(helper(i-1,j,s,t,dp),helper(i,j-1,s,t,dp)));
        }
        return dp[i][j]=res;
    }
    int minDistance(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,-1));
        return helper(l1-1,l2-1,word1,word2,dp);
    }
};

