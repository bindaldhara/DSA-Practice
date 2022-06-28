class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        for(auto i: s)
        mp[i]++;
        unordered_set<int> val;
        int res=0;
        for(auto [v,c]:mp){
            if(val.find(c)==val.end())
                val.insert(c);
            else{
                while(c--){
                    res++;
                    if(val.find(c)==val.end()){
                val.insert(c);
                    break;
                    }
                }
            }
        }
        return res;
            
    }
};