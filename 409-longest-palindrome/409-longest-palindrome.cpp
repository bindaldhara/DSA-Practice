class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        
        for(int i = 0 ; i < s.size(); i++)
            mp[s[i]]++;
        int max =0 ;
        for(auto item : mp){
            if(item.second % 2 == 0)
                max+= item.second;
            else{
                if(item.second > 2)
                    max += item.second-1;
            }
        }
        
        return max != s.size() ? max+1: max;
    }
};

