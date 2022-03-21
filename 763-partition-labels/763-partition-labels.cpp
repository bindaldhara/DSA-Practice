class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> mp;
        for(auto x : s)
            mp[x]++;
        
        vector<int> ans;
        map<char,int> mp1;
        int i = 0;
        int k = 0;
        int j = 0;
        while(j < s.length())
        {
           mp1[s[j]]++;
            if(mp1[s[j]]  == mp[s[j]]) 
            {
                while(k < j)
                {
                    if(mp1[s[k]] == mp[s[k]])
                        k++;
                    else
                        break;
                }

                if(k == j){
                    ans.push_back(j-i+1);
                    j++;
                    i = j;
                    k = j;
                    mp1.clear();
                }
                else
                    j++;
                
            }
            else
                j++;
        }
        return ans;
    }
};