class Solution {
public:
    bool isCircularSentence(string st) {
        if(st[0]!=st[st.size()-1])
            return false;
        for(int i=0;i<st.size();i++)
        if(st[i]==' '&& st[i-1]!=st[i+1])
            return false;
        
        return true;
    }
};