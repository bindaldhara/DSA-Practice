class Solution {
public:
    string decodeString(string s) {
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!=']')
                st.push(s[i]);
            else{
                string ss="";
                while(!st.empty() && st.top()!='['){
                    ss=st.top()+ss;
                    st.pop();
                }
            
                st.pop();
            
                string number="";
                while(!st.empty() && isdigit(st.top()))
                {
                   number=st.top()+number;
                   st.pop();
                }
            
                int k=stoi(number);
            
                while(k--){
                   for(int j=0;j<ss.length();j++)
                       st.push(ss[j]);
                }
           }
        }
        
        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};