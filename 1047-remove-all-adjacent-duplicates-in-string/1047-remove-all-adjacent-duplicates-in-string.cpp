class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res="";
        for(int i=0;i<s.size();i++){
            if(st.empty()||s[i]!=st.top()){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};