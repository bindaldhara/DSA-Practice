class Solution {
public:
    int pivotInteger(int n) {
     int j = 1;
        while(j<=n){
            int sum1 = 0, sum2 = 0;
            for(int i=0;i<=j;i++){
                sum1 += i;
            }
            for(int i=j;i<=n;i++){
                sum2 += i;
            }
            if(sum1 == sum2)
                return j;
            j++;
        }
        return -1;   
    }
};