class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto it:mp)
            res.push_back(it.second);
        return res;    
    }
};