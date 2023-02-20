class Solution {
public:
    int res=0;
    int minOperations(int n) {
        if(n==0)
            return res;
        int x = log2(n);
        int diff = abs(min(n-pow(2,x), pow(2,x+1)-n));
        res++;
        minOperations(diff);
        return res;
    }
};