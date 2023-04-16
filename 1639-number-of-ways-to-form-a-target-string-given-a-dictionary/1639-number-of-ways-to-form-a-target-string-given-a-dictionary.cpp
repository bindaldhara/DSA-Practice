class Solution {
public:
    int mod = 1000000007;
    int ways(vector<vector<int>>&word, string &target, int index, int targetIndex, vector<vector<int>>&dp,int&m, int&k){
        if(targetIndex == k) return 1;
        if(index >= m) return 0;
        if(dp[index][targetIndex] != -1) return dp[index][targetIndex];
        dp[index][targetIndex] = ways(word, target, index+1, targetIndex, dp,m,k)%mod;
        dp[index][targetIndex] += (int)(word[index][target[targetIndex]-'a'] * (long)ways(word, target, index+1, targetIndex+1, dp, m,k)%mod);

        return dp[index][targetIndex]%mod;
    }
    int numWays(vector<string>& words, string target) {
        int n = words.size(), m = words[0].size(), k = target.size();
        vector<vector<int>>word(m, vector<int>(26, 0));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++)
                word[j][words[i][j] - 'a']++;
        }
        vector<vector<int>>dp(m, vector<int>(k, -1));
        return ways(word, target, 0, 0, dp,m, k);
        
    }
};