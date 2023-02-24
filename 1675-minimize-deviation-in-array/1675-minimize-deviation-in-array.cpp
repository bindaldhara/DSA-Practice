class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        priority_queue<int> pq;
        int mn=INT_MAX;
        for(auto i:nums){
            if(i%2!=0)
                i*=2;
            mn=min(mn,i);
            pq.push(i);
        }
        int res=INT_MAX;
        while((pq.top())%2==0){
            int temp=pq.top();
            pq.pop();
            res=min(res,temp-mn);
            temp/=2;
             mn=min(mn,temp);
            pq.push(temp);
        }
        res=min(res,pq.top()-mn);
        return res;
    }
};