class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(k==0)
            return 1.0;
        double windowSum=0.0;
        for(int i=k;i<k+maxPts;i++){
            if(i<=n){
                windowSum+=1.0;
            }
            else{
                windowSum+=0.0;
            }
        }

        unordered_map<int,double>dp;

        for(int i=k-1;i>=0;i--){
            dp[i]=windowSum/(double)maxPts;
            double rem=0;

            if(i+maxPts<=n){
                if(dp.find(i+maxPts)!=dp.end()){
                    rem=dp[i+maxPts];
                }
                else{
                    rem=1.0;
                }
            } 


            windowSum+=dp[i]-rem;
        }

        return dp[0];
        
    }
};