class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto& it: mp){
            res.push_back(it.second);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size()-1;i++){
            if(res[i]==res[i+1]) 
                return false;
        }
        return true;
    }
};