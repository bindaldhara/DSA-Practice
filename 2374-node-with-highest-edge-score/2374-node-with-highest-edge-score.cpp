class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        vector<long long> a(n,0);
        for(int i = 0;i<n;i++)
            a[edges[i]] += (long long int)i;
        long long int mx = *max_element(a.begin(),a.end());
        for(int i = 0;i<n;i++)
            if(a[i]==mx)return i;
        return 0;
    }
};