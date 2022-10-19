class Solution {
public:
    static bool compare(pair<string,int>a,pair<string,int>b){
    if(a.second>b.second)   
        return true;
    else if(a.second==b.second)  
        return a.first<b.first;
    return false;
}
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        vector<string>res;
        for(auto i:words)
            mp[i]++;
        vector<pair<string,int>> temp;
        for(auto it:mp){
            temp.push_back({it.first,it.second});
        }
        sort(temp.begin(),temp.end(),compare);
        for(int i=0;i<k;i++){
            res.push_back(temp[i].first);
        }
        return res; 
    }
};