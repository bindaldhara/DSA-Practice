class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int> > res;
         map <int, int> mp;
        for(auto i1:items1){
            mp[i1[0]] += i1[1];
        }
        for(auto i2:items2){
            mp[i2[0]] += i2[1];
        }
        
        for(auto m :mp){
            res.push_back({m.first,m.second});
        }
        return res;
    }
};

