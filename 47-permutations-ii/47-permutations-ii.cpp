class Solution {
public:
    void Permutations(vector<vector<int>>& res,vector<int> nums,int l,int h){
        if(l == h){
            res.push_back(nums);
            return;
        }
        for(int i=l;i<=h;i++){
               swap(nums[l],nums[i]);
            Permutations(res,nums,l+1,h);
            swap(nums[l],nums[i]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<vector<int>> res;
        Permutations(res,nums,0,n);
        set<vector<int>>s;
        for(auto x:res)
            s.insert(x);
        vector<vector<int>>v (s.begin(),s.end());
        return v; 
    }
};