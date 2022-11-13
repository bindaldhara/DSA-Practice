class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        int n = nums.size();
        unordered_map<int,int> map;   
        for(int i=0;i<n;i++)
            map[nums[i]]++;
        for(auto i : map)                     
            pq.push({i.second,i.first});
        
        vector<int> v;
        while(k--){
            v.push_back(pq.top().second);      
            pq.pop();
        }
        return v;
    }
};


