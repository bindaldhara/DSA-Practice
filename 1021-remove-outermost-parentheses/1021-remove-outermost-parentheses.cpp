class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; ++i){
           if (!st.empty()){
             if (st.top() == '(' && s[i] == ')')
                st.pop();
            else
                st.push(s[i]);

            if (!st.empty())
                res += s[i];
            continue;
        }
        st.push(s[i]);
    }
    return res;
    }
};