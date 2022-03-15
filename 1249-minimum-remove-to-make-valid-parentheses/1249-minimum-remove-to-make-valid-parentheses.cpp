class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        for(int i = 0; i < s.length(); i++) {
            if(st.size() && s[i] == ')' && st.top().first == '(')
                st.pop();
            else if(s[i] == ')')
                st.push({s[i],i});
            if(s[i] == '(')
                st.push({s[i],i});
            
        }
        
        while(st.size()) {
            int x = st.top().second;
            s.erase(s.begin() + x);
            st.pop();
        }
        return s;
    }
};