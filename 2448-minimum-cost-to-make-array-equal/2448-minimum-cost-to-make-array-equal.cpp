class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long mn=LLONG_MAX;
        int n=cost.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],cost[i]});
        }
        int c=0;
        while(!pq.empty()){
            auto it=pq.top();
            nums[c]=it.first;
            cost[c]=it.second;
            pq.pop(); 
            c++;
        }
        vector<long long> pre(n);
        pre[0]=0;
        long long totCost=cost[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+(nums[i]-nums[i-1])*totCost;
            totCost+=cost[i];
        }
        totCost=cost[n-1];
        vector<long long> suf(n);
        suf[n-1]=0;
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+(nums[i+1]-nums[i])*totCost;
            totCost+=cost[i];
        }
        for(int i=0;i<n;i++){
            mn=min(suf[i]+pre[i],mn);
        }
        return mn;
    }
};