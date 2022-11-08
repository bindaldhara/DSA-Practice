class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string res="";
        for(int i=0;i<s.size();i++){
            if(!st.empty() && (st.top()-'A'== s[i]-'a'|| st.top()-'a'== s[i]-'A' ))
                st.pop();
            else
                st.push(s[i]);
        }
      
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
   
       reverse(res.begin(),res.end());
        return res;
    }
};

