class Solution {
public:
    unordered_map<string, priority_queue<string, vector<string>, greater<string>>> pq;
    vector<string> ans;
    
    void dfs(string s){
        auto &x = pq[s];
        while(!x.empty()){
            string str = x.top();
            x.pop();
            dfs(str);
        }
        ans.push_back(s);
    }
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        for(auto &it : tickets)
            pq[it[0]].push(it[1]);
        dfs("JFK");
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};