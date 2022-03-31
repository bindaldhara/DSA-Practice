class Solution {
public:
   
        int count_bits(int num){
        int count{0};
        
        while(num){
            count += num & 1;
            num >>= 1;
        }
        
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        multimap<int, int> mp{};
        
        for(int &num : arr)
            mp.insert({count_bits(num), num});
        
        vector<int> ans{};
        
        for(auto &item: mp)
            ans.push_back(item.second);
        
        return ans;
    }
};