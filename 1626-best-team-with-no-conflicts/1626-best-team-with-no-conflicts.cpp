class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> temp;
        for(int i=0;i<scores.size();i++){
            temp.push_back({ages[i], scores[i]});
        }
        sort(temp.begin(), temp.end());
        vector<int> scs;
        for(auto it : temp){
            scs.push_back(it.second);
        }
        vector<int> dp(scores.size(), 0);
        dp[0] = scs[0];
        for(int i=1;i<scores.size();i++){
            dp[i] = scs[i];
            int max_add = 0;
            for(int j=i-1;j>=0;j--){
                if (scs[j] <= scs[i]){
                    max_add = max(max_add, dp[j]);
                }
            }
            dp[i] += max_add;
        }
        
        return *max_element(dp.begin(), dp.end());
    }
};