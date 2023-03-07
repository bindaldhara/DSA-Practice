class Solution {
public:

    void combination(int n, int k, vector<vector<int>> &res,vector<int>&temp,int ind){
        if(temp.size() == k){
            res.push_back(temp);
            return;
        }
        for(int i= ind;i<=n;i++){
            temp.push_back(i);
            combination(n,k,res,temp,i+1);
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int>temp;
        combination(n,k,res,temp,1);
        return res;
    }   
};