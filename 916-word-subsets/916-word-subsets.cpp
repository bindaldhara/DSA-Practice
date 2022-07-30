class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> cnt(26,0);
        for(auto i : words2){
            vector<int> curr(26,0);
            for(auto c : i){
                curr[c-'a']++;
                cnt[c-'a'] = max(cnt[c-'a'],curr[c-'a']);
            }
        }
        
        for(auto j : words1){
            vector<int> curr(26,0);
            for(auto c : j){
                curr[c-'a']++;
            }
            bool flag = true;
            for(int i = 0; i < 26; i++){
                if(curr[i] < cnt[i]){
                    flag = false;
                    break;
                }
            }
            if(flag)
                res.push_back(j);
        }
        
        return res;
    }
};