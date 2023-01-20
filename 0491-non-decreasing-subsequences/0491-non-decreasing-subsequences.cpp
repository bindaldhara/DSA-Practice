class Solution {
public:
   void helper(vector<int>&v,vector<int>temp,int i,set<vector<int>>&st){
        if(i == v.size()){
            if(temp.size() < 2)
                return;
            for(int j = 1; j < temp.size(); j++){
                if(temp[j-1] > temp[j])
                    return;
            }
            st.insert(temp);
            return;
        }
        
        temp.push_back(v[i]);
        helper(v, temp, i+1, st);
        temp.pop_back();
        helper(v, temp, i+1, st);
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>st;
        helper(nums,temp,0,st);
        vector<vector<int>>res(st.begin(),st.end());
        return res;
        
    }
};