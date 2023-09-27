class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long i, N = 0;
        for(i=0; N < k; i++) 
            N = isdigit(s[i]) ? N*(s[i]-'0') : N+1;
        while(i--)
            if(isdigit(s[i]))
                N /= s[i]-'0',k %= N;
            else if(k % N-- == 0) 
                return string(1,s[i]);
        return "lee215";
    }
};