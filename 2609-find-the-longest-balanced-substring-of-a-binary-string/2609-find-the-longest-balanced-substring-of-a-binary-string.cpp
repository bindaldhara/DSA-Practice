class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
          int i=0;
        int res=0;
        while(i<s.size()){
            int count0=0;
            int count1=0;
            int min_count=0;
            while(s[i]=='0'){
                count0++;
                i++;
            }
            while(s[i]=='1'){
                count1++;
                i++;
            }
            min_count=min(count0,count1);
            res=max(res,min_count);
        }
        

        return 2*res;
    }
};