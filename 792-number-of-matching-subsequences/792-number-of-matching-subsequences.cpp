class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<int> mp[26];
    for(int i=0;i<s.size();i++)
    {
       mp[s[i]-'a'].push_back(i); 
    }
    int res=0;
    for(auto str:words)
    {
        int j=0,pre=-1;bool f=0;
        while(j!=str.size())
        {
            auto it=upper_bound(mp[str[j]-'a'].begin(),mp[str[j]-'a'].end(),pre);
            if(it==mp[str[j]-'a'].end())
            {
                f=1;
                break;
            }
            pre=*it;
            j++;
        }
        if(f==0)
            res++;
    } 
    return res;
    }
};

