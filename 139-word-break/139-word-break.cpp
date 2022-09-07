class Solution {
public:
     bool helper(int i,int j,string& s,vector<string>& wordDict,vector<vector<int>>&dp){
        if (i==wordDict.size()) 
            return false;
        if (j==s.size()) 
            return true;
        if (dp[i][j]!=-1) 
            return dp[i][j];
        string k=wordDict[i];
        bool temp=0;
        if (s.substr(j,k.size())==k) 
            temp=helper(0,j+k.size(),s,wordDict,dp);
        bool temp1=helper(i+1,j,s,wordDict,dp);
        return dp[i][j]=temp || temp1;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<vector<int>> dp(wordDict.size(),vector<int>(s.size(),-1));
        return helper(0,0,s,wordDict,dp);
    }
};
