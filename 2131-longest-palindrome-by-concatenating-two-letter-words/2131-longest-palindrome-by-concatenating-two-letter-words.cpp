class Solution {
public:
    int longestPalindrome(vector<string>& words) {
      unordered_map<string,int> mp;
        int res=0;
        
        for(auto w: words){
            string rev = w;
            swap(rev[0], rev[1]);
            if(mp[rev] !=0) {
                res+=4;
                mp[rev]-=2;
            }
            else
                mp[w]+=2;
        }
        
        for(auto a: mp){
            if(a.first[0]==a.first[1] && a.second==2) 
                return res+2;
        }
        return res;   
    }
};














