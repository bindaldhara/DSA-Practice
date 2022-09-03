class Solution {
public:
   int maximumRobots(vector<int>& chargeTimes, vector<int>& rc, long long budget) {
        int l=0,r=0;
        int n=chargeTimes.size();
        priority_queue<pair<long long,long long>>pq;
        int res=0;
        long long s=0;
        while(r<n){
            s+=rc[r];
            pq.push({chargeTimes[r],r});
            while(!pq.empty() && pq.top().second<l)
                pq.pop();
            while(!pq.empty() && s*(r-l+1)+pq.top().first>budget){
                s-=rc[l];
                l++;
                
                while(!pq.empty() && pq.top().second<l)
                    pq.pop();
            }
            res=max(res,r-l+1);
            r++;
        }
        return res;
    }
};


