class Solution {
public:
     bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char> m;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]){
                if(m[s[i]]!=t[i])
                    return false;
            }
            else
                m[s[i]] = t[i];
        }
       m.clear();
        for(int i=0;i<t.size();i++){
            if(m[t[i]]){
                if(m[t[i]]!=s[i])
                    return false;
            }
            else
                m[t[i]] = s[i];
        }
        return true;   
    }
};
















