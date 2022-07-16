class Solution {
    vector<vector<vector<int>>> dp;
    int mod;
public:
    Solution() {
        dp = vector<vector<vector<int>>> (51, vector<vector<int>>(51, vector<int>(51, -1)));
        mod = 1e9+7;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        if(startRow<0 || startRow>=m || startColumn<0 || startColumn>=n) return 1;
        if(!maxMove) return 0;
        if(dp[startRow][startColumn][maxMove]!=-1) return dp[startRow][startColumn][maxMove];
        long long ans = findPaths(m, n, maxMove-1, startRow+1, startColumn);
        ans = (ans + findPaths(m, n, maxMove-1, startRow, startColumn+1))%mod;
        ans = (ans + findPaths(m, n, maxMove-1, startRow-1, startColumn))%mod;
        ans = (ans + findPaths(m, n, maxMove-1, startRow, startColumn-1))%mod;
        return dp[startRow][startColumn][maxMove] = ans;
    }
};


