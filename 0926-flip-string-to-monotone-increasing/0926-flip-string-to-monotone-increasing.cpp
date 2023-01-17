class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int res=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt++;
            }
            else{
                res++;
                res=min(res,cnt);
            }
        }
      return res;
    }
};