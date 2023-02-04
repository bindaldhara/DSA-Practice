class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.length();
       int m=s2.length();
       unordered_map<char,int> mp1,mp2; 
        if(n>m) 
            return false;
        
        for(int i=0;i<n;i++)
            mp1[s1[i]]++;
        for(int i=0;i<m-n+1;i++){
            mp2.clear();
            for(int j=i;j<n+i;j++)
                mp2[s2[j]]++;
            if(mp1==mp2) 
                return true;
        }
        return false; 
    }
};

