class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        for(int i=0;i<accounts.size();i++)
            sum=max(sum,accumulate(accounts[i].begin(),accounts[i].end(),0));
        return sum;
    }
};