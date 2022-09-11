class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }    
        if(mp.size()==0)
            return -1;
        int mxm = 0;
        int temp;
        for(auto it:mp){
            if(it.second>mxm){
                mxm = max(mxm, it.second);
                temp = it.first;
            }
        }
        return temp;
    }
};

