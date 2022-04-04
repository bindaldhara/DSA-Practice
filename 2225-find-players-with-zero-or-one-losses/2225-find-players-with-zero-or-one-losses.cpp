class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
     int n= matches.size();
    unordered_map<int,int> w, l;
    int maxi = 0;
    set<int> s;
    for(int i=0; i<n ;i++){
        int win = matches[i][0], loose = matches[i][1];
        maxi = max({maxi, win, loose});
        w[win]++, l[loose]++;
        if(s.find(win) == s.end()) s.insert(win);
        if(s.find(loose) == s.end()) s.insert(loose);
    }
    
    vector<vector<int>> res;
    
    vector<int> v1, v2;
    for(auto i : s){
        if(l.find(i) == l.end() or l[i] == 0) v1.push_back(i);
        if(l.find(i) != l.end() and l[i] == 1) v2.push_back(i);
    }
    
    res.push_back(v1);
    res.push_back(v2);
    
    return res;
    }
};