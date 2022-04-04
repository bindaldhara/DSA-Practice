class Solution {
public:
    long long numberOfWays(string s) {
        int tzero=count(s.begin(),s.end(),'0'), cur_zero=0;
        int tone=count(s.begin(),s.end(),'1'), cur_one=0;
        long long res=0;
        
        for (int i=0;i<s.size();i++){
            if (s[i]=='0'){
                res+=(cur_one*(tone-cur_one));
                cur_zero++;
            }
            else{
                res+=(cur_zero*(tzero-cur_zero));
                cur_one++;
            }
        }
        return res;
    }
};




