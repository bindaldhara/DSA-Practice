class Solution {
public:
       bool isop(string s)
    {
        return (s=="+"||s=="-"||s=="*"||s=="/");
    }

int evalRPN(vector<string>& tokens){
    stack<string>st;
    string ff,ss;
    if(tokens.size()==1 and!isop(tokens[0])) 
        return stoi(tokens[0]);
    for(int i=0;i<tokens.size();i++){
        while(i<tokens.size() and !isop(tokens[i]))
        {
            st.push(tokens[i]);
            i++;
        }
        if(st.size()!=0)
        {
            ss=st.top();
            st.pop();
        }
        if(st.size()!=0)
        {
            ff=st.top();
            st.pop();
        }
        if(tokens[i]=="+"){
            st.push(to_string(stoll(ff)+stoll(ss)));
        }
        else if(tokens[i]=="*")
        {
              st.push(to_string(stoll(ff)*stoll(ss)));
        }
        else if(tokens[i]=="-")
        {
              st.push(to_string(stoll(ff)-stoll(ss)));
        }
        else if(tokens[i]=="/")
        {
              st.push(to_string(stoll(ff)/stoll(ss)));
        }
    }
     return stoi(st.top());
    }
};