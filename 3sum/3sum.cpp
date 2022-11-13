class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		unordered_map<int,int> mp; 
		vector<vector<int>> result;
		
		for (auto num : nums)   { 
			mp[num]++;
		}
		
		for (auto i = mp.begin(); i != mp.end(); i++) {
			int a = i->first;
			for (auto j = mp.begin(); j != mp.end(); j++) {
				int b = j->first, c = -a - b;
				if (a < b && b < c && mp.find(c) != mp.end())
					result.push_back({ a,b,c });
			}
			if (i->second > 1 && a != 0 && mp.find(-2 * a) != mp.end()) 
                result.push_back({ {a,a,-2 * a} });
			if (i->second > 2 && a == 0) result.push_back({ 0,0,0 });
		}
		return  result;
    }
};