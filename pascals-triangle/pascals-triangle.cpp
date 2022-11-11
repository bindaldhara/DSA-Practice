class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
      vector<vector<int>>res(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    res[i].push_back(1);
                else
                    res[i].push_back(res[i-1][j-1]+res[i-1][j]);
            }
        }
        return res;  
    }
};

