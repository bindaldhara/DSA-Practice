class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
            int cnt = 0, i = 0;
        int n = s1.size();
        
        vector<int> dp;
        while (i < n) {
            if (s1[i] != s2[i]) {
                cnt++;
                dp.push_back(i);
            }
            if (cnt > 2)
                return false;
            i++;
        }
        
        if (cnt == 0)
            return true;
        if (cnt == 2 && s1[dp[0]] == s2[dp[1]] && s1[dp[1]] == s2[dp[0]])
            return true;
        return false;  
    }
};

