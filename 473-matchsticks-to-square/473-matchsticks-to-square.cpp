class Solution {
public:
    bool solve(int i,vector<int>&matchsticks,int a,vector<int>&sq){
        if(i==matchsticks.size())
            return true;
        for(int k=0;k<4;k++){
            if(sq[k]+matchsticks[i]<=a){
                sq[k]+=matchsticks[i];
                if(solve(i+1,matchsticks,a,sq))
                    return true;
                sq[k]-=matchsticks[i];
            }
        }
        return false;
    }
    
    bool makesquare(vector<int>& matchsticks) {
        int s,a;
        vector<int>sq(4,0);
        s=accumulate(matchsticks.begin(),matchsticks.end(),0);
        a=s/4;
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
       return solve(0,matchsticks,a,sq);
    }  
};



