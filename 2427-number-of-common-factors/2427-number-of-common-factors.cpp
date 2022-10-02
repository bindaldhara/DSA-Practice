class Solution {
public:
    int commonFactors(int a, int b) {
        int minimum_no = min(a , b);
        int res=0;
        
        for(int i =1;i<=minimum_no;i++){
            if(a % i == 0 && b % i == 0)
                res++;
        }
        return res;
    }
};