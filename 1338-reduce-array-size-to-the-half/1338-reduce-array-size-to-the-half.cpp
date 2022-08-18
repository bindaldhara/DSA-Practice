class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i:arr)
            mp[i]++;
        vector<int>res;
        for(auto i:mp)
            res.push_back(i.second);
        sort(res.begin(),res.end());
        int n=res.size();
        int j=n-1,sum=0,k=arr.size()/2;

        for(j;j>=0;j--){
            sum+=res[j];
            if(sum>=k)
                break;
        }
        
        return n-j;
    }
};