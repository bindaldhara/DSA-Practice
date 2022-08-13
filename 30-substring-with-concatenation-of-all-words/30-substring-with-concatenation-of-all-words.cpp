class Solution {
    bool check(unordered_map<string, int> mp, string s, int len){
        for(int i=0;i<s.size();i+=len) {
            string str = s.substr(i, len);
            if(mp.find(str) != mp.end()) {
                mp[str]--;
                if(mp[str] < 0) 
                    return false;
            } else 
                return false;
        }
        return true;
    }
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int a = words[0].size()*words.size();
        unordered_map<string, int> mp;
        for(int i=0;i<words.size();i++) 
            mp[words[i]]++;
        vector<int>v;
        for(int i=0;i+a<=s.size();i++){
            if(check(mp, s.substr(i, a), words[0].size()))
                v.push_back(i);
        }
        return v;
    }
};