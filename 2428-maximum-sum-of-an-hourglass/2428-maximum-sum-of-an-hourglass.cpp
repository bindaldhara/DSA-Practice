class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), res= 0;
        for(int i=0;i<=m-3;i++){
            for(int j=0;j<=n-3;j++){
                int sum = 0;
                for(int k =i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if (k == i+1 && l == j) 
                            continue;
                        if (k == i+1 && l == j+2) 
                            continue;
                        sum += grid[k][l];
                    }
                }
                res = max(res, sum);
            }
        }
        return res;
    }
};

