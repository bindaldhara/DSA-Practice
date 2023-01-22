class Solution {
public:
    bool makeStringsEqual(string s, string target) {
      int cnt_one_s=0,cnt_one_t=0;
        if(s==target)
            return true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt_one_s++;
            }
            if(target[i]=='1'){
                cnt_one_t++;
            }
        }
        if((cnt_one_s!=0 && cnt_one_t==0) || (cnt_one_s==0 && cnt_one_t!=0))
            return false;
        return true;
    }
};