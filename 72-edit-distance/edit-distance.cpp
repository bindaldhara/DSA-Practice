class Solution {
public:
   int helper(int i, int j, string &s, string &t, vector<vector<int>>&dp){
        if(i>= s.size()) return t.size()-j;
        if(j>= t.size()) return s.size()-i;
        if(dp[i][j]!=-1)  return dp[i][j];
       
        int res=0;
       
        if(s[i]==t[j]) 
            res=helper(i+1,j+1,s,t,dp);
        else{
            res=1+min(helper(i+1,j+1,s,t,dp),min(helper(i+1,j,s,t,dp),helper(i,j+1,s,t,dp)));
        }
        return dp[i][j]=res;
    }
    
    int minDistance(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,-1));
        return helper(0,0,word1,word2,dp);
        
    }
};