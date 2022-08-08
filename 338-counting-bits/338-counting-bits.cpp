class Solution {
public:
   void countOne(int n, int& cnt){
        while(n!=0){
            n&=n-1; 
            cnt++;   
        }
    }
    
    vector<int> countBits(int n){
        vector<int>res;
        int cnt=0;
        for(int i=0; i<=n; i++){
            countOne(i,cnt);
            res.push_back(cnt);
            cnt=0;
        }
        return res;
    }
};

