class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(auto x:s){
            if(x=='B' || x=='D'){
                if(!st.empty() && ((x=='B' && st.top()=='A') || (x=='D' && st.top()=='C'))){
                    st.pop();
                }
                else{
                st.push(x);
                }
            }
            else{
            st.push(x);
            }
        }
        return st.size();
    }
};