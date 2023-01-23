class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector< int> ind(n+1);
        vector<int > outd(n+1);
        for(vector<int> &vec : trust){
            int u = vec[0];
            int v = vec[1];
            outd[u]++;
            ind[v]++;
        }
        for(int i = 1;i<=n;i++){
            if(ind[i] == n-1 && outd[i] ==0)
            return i;

        }
        return -1;
    }
};

