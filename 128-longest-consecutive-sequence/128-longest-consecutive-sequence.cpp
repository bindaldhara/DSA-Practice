class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),cnt=0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(auto i:s){
            if(s.count(i-1))
                continue;
            int j=0;
            while(s.count(i+j))
                j++;
            cnt=max(cnt,j);
        }
        return cnt;
    }
};

