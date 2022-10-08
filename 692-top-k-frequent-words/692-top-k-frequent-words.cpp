class Solution {
public: 
    static bool cmp(pair<string,int>a,pair<string,int>b){
    if(a.second>b.second)   
        return true;
    else if(a.second==b.second)  
        return a.first<b.first;
    return false;
}

vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string,int>mp;
    for(auto it:words)
        mp[it]++;
    vector<pair<string,int>>v;
    for(auto it:mp)
        v.push_back({it.first,it.second});
    sort(v.begin(),v.end(),cmp);
    vector<string>res;
    for(int i=0;i<k;i++){
        res.push_back(v[i].first);
        //cout<<v[i].second<<" "<< v[i].first<<endl;
    }
    return res; 
   }
};
