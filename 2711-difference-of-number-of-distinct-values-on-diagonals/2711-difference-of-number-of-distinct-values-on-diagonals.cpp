class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m =grid.size(),n=grid[0].size();
     vector<vector<int>> ans(m, vector<int>(n, 0));
     for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            unordered_set<int> tl, br;
            for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
                tl.insert(grid[i][j]);
            }
            
            for (int i = r + 1, j = c + 1; i < m && j < n; i++, j++) {
                br.insert(grid[i][j]);
            }
            
            int x= tl.size() - br.size();
            ans[r][c] =abs(x);
        }
    }

    return ans;
    }
};