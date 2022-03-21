class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1;
        while(n>0){
            int ldig=n%10;
            sum+=ldig;
            pro*=ldig;
            n/=10;
        }
        return pro-sum;
    }
};