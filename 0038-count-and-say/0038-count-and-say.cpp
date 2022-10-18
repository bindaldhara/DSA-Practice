class Solution {
public:
    string helper(int i,string &s,int n){
        if(i==n) 
            return s;
        string res;
        for(int i=0;i<s.size();i++){
            int j=i,cnt=0;
            while(j<s.size() && s[j]==s[i]) 
                j++,cnt++;
            res+=to_string(cnt)+s[i];
            i=j-1;
        }
        return helper(i+1,res,n);
    }
    string countAndSay(int n) {
        string s="1";
        return helper(1,s,n);
    }
};

