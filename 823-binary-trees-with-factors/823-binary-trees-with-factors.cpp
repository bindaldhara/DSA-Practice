class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        const int m = 1e9 +7;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<long long,long long> mp;
        int s=0;
        for(int i = 0;i<n;i++){
            mp[arr[i]] = 1;
            for(int j = 0;j<i;j++){
                if(arr[i] %arr[j] == 0){
                    int fc= arr[j];
                    int sc= arr[i] /arr[j];
                    if(mp.find(sc) != mp.end())
                        mp[arr[i]] += (mp[sc] * mp[fc]);
            }
          }
             s=(s+mp[arr[i]])%m;
        }
        return s;
    }
};

