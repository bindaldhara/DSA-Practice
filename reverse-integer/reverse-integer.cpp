class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN)
            return 0;
        int res=0;
        int num=x;
        if(num<0)
            num*=-1;
        while(num>0){
            if(res>INT_MAX/10)
                return 0;  
            res=(num%10)+res*10;
            num/=10;
        }
        if(x<0)
            res*=-1;
        return res;      
    }
};