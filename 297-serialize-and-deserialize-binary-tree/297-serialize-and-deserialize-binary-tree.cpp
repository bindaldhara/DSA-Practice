/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

   // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL)
            return "";
        string ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = NULL;
            int len = q.size();
            for(int i = 0; i < len; i++){
                node = q.front();
                q.pop();
                if(node != NULL){
                    if(ans=="")
                        ans+=(std::to_string(node->val));
                    else
                        ans+=(","+std::to_string(node->val));
                    q.push(node->left);
                    q.push(node->right);
                }else{
                    if(ans=="")
                        ans+=("null");
                    else
                        ans+=",null";
                }
            }
        }  
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0)
            return NULL;
        stringstream str_s(data);
        string str;
        getline(str_s, str, ',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            getline(str_s, str, ',');
            
            if(str == "null" or str == "null]")
                curr->left = NULL;
            else {
                TreeNode* left_node = new TreeNode(stoi(str));
                curr->left = left_node;
                q.push(left_node);
            }
            getline(str_s, str, ',');

            if(str == "null" or str == "null]"){
                curr->right = NULL;
            }else{
                cout << str << endl;
                TreeNode* right_node = new TreeNode(stoi(str));
                curr->right = right_node;
                q.push(right_node);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));