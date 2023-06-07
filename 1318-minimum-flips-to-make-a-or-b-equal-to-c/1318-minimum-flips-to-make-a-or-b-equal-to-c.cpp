class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        for(int k=31;k>=0;k--){
            if(c&(1<<k)){
                if(a&(1<<k) || (b&(1<<k)))
                    continue;
                else
                    ans++;
            }
            else{
                if(a&(1<<k))
                    ans++;
                if(b&(1<<k))
                    ans++;
            }
        }
        return ans;
    }
};

