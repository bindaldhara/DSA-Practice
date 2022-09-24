class Solution {
public:
    int concatenatedBinary(int n) {
        long ans=0, m=1e9+7,cl=0;
        for( int i=1;i<=n;i++){
            if((i&(i-1))==0) 
                cl++;
            ans= ( ans<<cl)%m;
            ans = (ans+i)%m;
        }
        return ans;
    }
};