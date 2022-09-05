/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz = q.size();
            vector<int>temp;
            while(sz--){
                Node * node = q.front();
                q.pop();
                if(node==NULL)
                    continue;
                temp.push_back(node->val);
                for(auto child:node->children)
                    q.push(child);
            }
            if(temp.size()>0)
				res.push_back(temp);
        }
        return res;
    }
};