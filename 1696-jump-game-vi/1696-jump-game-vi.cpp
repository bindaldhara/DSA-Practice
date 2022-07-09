class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
      int n=nums.size();
      priority_queue<pair<int,int>>pq;
        pq.push({nums[0],0});
        int large = nums[0];
                
        for(int i=1;i<n;i++){
            large = 1;
            while(!pq.empty()){
                while(pq.top().second < max(0,i-k))
                    pq.pop();
                large = pq.top().first+nums[i];
                break;
            }
            pq.push({large,i});
        }
        return large;
    }
};

