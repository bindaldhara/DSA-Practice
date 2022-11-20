class Solution {
public:
    int calculate(string s) {
        int n=s.size(),res=0,sign=1;
        stack<int> st;
    
    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9'){
            int num=0;
            while(n>i && s[i]>='0' && s[i]<='9'){
                num =num*10 +(s[i]-'0');
                i++;
            }
            res+=num*sign;
            i--;
        }
        else if(s[i]=='+')
            sign=1;
        
        else if(s[i]=='-')
            sign=-1;
        
        else if(s[i]=='(')
        {
            st.push(res);
            st.push(sign);
            res=0;
            sign=1;
        }
        else if(s[i]==')')
        {
            res=st.top()*res;
            st.pop();
            res+=st.top();
            st.pop();
        }
    }
        
    return res;
    }
};


