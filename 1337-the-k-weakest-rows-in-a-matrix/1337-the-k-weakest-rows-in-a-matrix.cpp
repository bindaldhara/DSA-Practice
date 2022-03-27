class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat[0].size();
        int m =mat.size();
    for(int i=0; i<m; i++)
        mat[i].push_back(i);
    sort(mat.begin(), mat.end());
    vector<int> res(k);
    for(int i=0; i<k; i++)
        res[i]=mat[i][n];            
    return res;
    }
};

