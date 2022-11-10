class Solution {
public:
    string removeDuplicates(string s) {
      string res = "";
        for(int i=0;i<s.size();i++){
            if(!res.empty() && res.back() == s[i])
                res.pop_back();
            else
                res.push_back(s[i]);
        }
        return res;  
    }
};