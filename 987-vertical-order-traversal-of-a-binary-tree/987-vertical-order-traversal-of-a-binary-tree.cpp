/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                
                pair<TreeNode*,pair<int,int>> temp=q.front();
                q.pop();
                
                TreeNode* node=temp.first;
                int t1=temp.second.first;
                int t2=temp.second.second;
                
                mp[t1][t2].push_back(node->val);
                
                if(node->left)
                    q.push({node->left,{t1-1,t2+1}});
                
                if(node->right)
                    q.push({node->right,{t1+1,t2+1}});
                
            }
        }
        
        vector<vector<int>> res;
        for(auto i: mp){
            vector<int> temp;
            for(auto j: i.second){
                vector<int> v = j.second;
                sort(v.begin(), v.end());
                for(auto &k : v) 
                    temp.push_back(k);
            }
            res.push_back(temp);
        }
        return res;
    }
};