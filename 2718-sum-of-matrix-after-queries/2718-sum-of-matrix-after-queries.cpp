class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        long long res = 0;
        vector<int> row(n,-1);
        vector<int> col(n,-1);
        int r = n,c = n;
        for(int i = queries.size()-1;i>=0;i--){
            int type = queries[i][0];
            int ind = queries[i][1];
            int val = queries[i][2];
            if(type == 0){
                if(row[ind] == -1){
                    res+=(c*val);
                    row[ind] = 1;
                    r--;
                }
            }
            else{
                if(col[ind] == -1){
                    res+=(r*val);
                    col[ind] = 1;
                    c--;
                }
            }
        }
        return res;
    }
};
