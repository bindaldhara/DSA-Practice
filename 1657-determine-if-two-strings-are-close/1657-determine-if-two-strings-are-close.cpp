class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        vector<int>v1,v2; 
        vector<char>c1,c2; 
        
        for(auto it:word1)
        {
            mp1[it]++;
        }
       
        for(auto it:word2)
        {
            mp2[it]++;
        }
        for(auto it:mp1)
        {
            c1.push_back(it.first);
            v1.push_back(it.second);
        }
        for(auto ut:mp2)
        {
            c2.push_back(ut.first);
            v2.push_back(ut.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());
        if(v1==v2 and c1==c2) 
            return true;
        return false;
    }
};