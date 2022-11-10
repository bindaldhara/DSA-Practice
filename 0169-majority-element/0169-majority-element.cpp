class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
		for(auto  a : nums){
			mp[a]++;
		}
		for(auto a : mp){
			if(a.second>(nums.size())/2){
				return a.first;
			}
		}
		return 0;
    }
};