class Solution {
public:
    int climbStairs(int n) {
        int s1=2,s2=1;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        for(int i=3;i<=n;i++){
            int curr=s1+s2;
            s2=s1;
            s1=curr;
        }
        return s1;
    }
};