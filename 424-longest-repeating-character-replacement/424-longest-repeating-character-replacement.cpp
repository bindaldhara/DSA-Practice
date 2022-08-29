class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int i=0,j=0;
        int res = 0;
        int maxi = 0;
        map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            maxi = max(maxi,mp[s[j]]);
            if(j-i+1 > maxi+k){
                mp[s[i]]--; 
                i++; 
            }
            res = max(res,j-i+1);
            j++;
        }
        return res;
    }
};