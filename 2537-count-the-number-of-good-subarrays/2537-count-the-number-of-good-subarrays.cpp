class Solution {
public:
    long long countGood(vector<int>& v, int k) {
        unordered_map<int,int>mp;
        int left=0,right=0;
        long long res=0;
        int c=0;
        while(right<v.size()){
            if(mp[v[right]]==0){
                mp[v[right]]++;
                right++;
            }
            else{
                c+=mp[v[right]];
                mp[v[right]]++;
                while(c>=k){
                    res+=v.size()-right;
                    mp[v[left]]--;
                    c-=mp[v[left]];
                    left++;                    
                }
                right++;
            }
        }
        return res;
    }
};