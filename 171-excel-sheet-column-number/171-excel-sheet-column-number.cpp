class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length(), res=0;
        for(int i=0; i<n; i++)
            res+=(pow(26, n-i-1)*(columnTitle[i]-'A'+1));
        return res;
    }
};