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
 vector<int> preorder(Node* root) {
        vector<int >res;
        Traversalpreorder(root,res);
        return res;
        
    }
    void Traversalpreorder(Node* root, vector<int>&res){
        if(root==NULL)
            return ;
        
         res.push_back(root->val);
        for(auto children : root->children){
           Traversalpreorder(children,res);            
        }
        return ;
        
    }
};