class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int count = 1;
        int lth = 0;
        int rth=0;
        for(int i=0; i<n;i++){
        
            int l = i-1;
            int r = i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(count<r-l+1){
                    count = r-l+1;
                    lth = l;
                    rth = r;
                }
                l--;
                r++;
            }
            
            l = i-1;
            r = i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(count<r-l+1){
                    count = r-l+1;
                    lth = l;
                    rth = r;
                }
                l--;
                r++;
            }
            
            l = i;
            r = i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(count<r-l+1){
                    count = r-l+1;
                    lth = l;
                    rth = r;
                }
                l--;
                r++;
            }
        }
        return s.substr(lth, rth-lth+1);  
    }
};