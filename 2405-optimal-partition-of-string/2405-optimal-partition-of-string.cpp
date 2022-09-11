class Solution {
public:
    int partitionString(string s) {
        int res=0;
        map<char,int> mp;
        for(auto &ch: s){
            if(mp[ch]>0){
                mp.clear();
                res++;
                mp[ch]++;
            }
            mp[ch]++;
            
        }
        return res+1;  
    }
};