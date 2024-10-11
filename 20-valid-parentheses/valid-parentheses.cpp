class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        if (s.length() % 2 != 0)
            return false;
        
        for (int i = 0; i < s.length(); i++) {
            if(s.at(i) == '[' || s.at(i) == '{' || s.at(i) == '(')
                st.push(s.at(i));
            
            if (st.empty())
                return false;
            
            switch(s.at(i)) {
                case ']':
                    if (st.top() == '[')
                        st.pop();
                    else
                        return false;
                    break;
                case '}':
                    if (st.top() == '{')
                        st.pop();
                    else
                        return false;
                    break;
                case ')':
                    if (st.top() == '(')
                        st.pop();
                    else
                        return false;
                    break;
            }      
        }
        
        return st.empty();
    }
};