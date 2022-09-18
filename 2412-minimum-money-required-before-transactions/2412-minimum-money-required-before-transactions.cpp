class Solution {
public:
    long long minimumMoney(vector<vector<int>>& transactions) {
        long long total_spend = 0,cashback=0,cost=0;
        int n = transactions.size();
        for(int i=0;i<n;i++){

            if(transactions[i][0]>transactions[i][1]){ 
              total_spend += transactions[i][0]-transactions[i][1];
             cashback = max(cashback,(long long)transactions[i][1]);
            }
            
            if(transactions[i][0]<=transactions[i][1]) 
             cost = max(cost,(long long)transactions[i][0]);
        }
    return total_spend + max(cost,cashback);
    }
};