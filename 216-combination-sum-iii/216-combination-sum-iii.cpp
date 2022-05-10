class Solution {
public:
    void fun(vector<vector<int>>&res, vector<int>&temp, int n, int k) {
        if(n == 0 && temp.size() == k) 
            res.push_back(temp);
        else if(temp.size() < k) {
            for(int i = temp.empty() ? 1 : temp.back() + 1; i<=9; i++) {
                if(n-i < 0) 
                    break;
                temp.push_back(i);
                fun(res, temp, n-i, k);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        fun(res, temp, n, k);
        return res;
        
    }
};