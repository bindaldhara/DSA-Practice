/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node)   
            return NULL;

        queue<Node*>q;
        q.push(node);
        unordered_map<Node*, Node*>mp;
        mp[node] = new Node(node->val);

        while (!q.empty()){
            Node *temp = q.front();
            q.pop();

            for (auto nbr : temp->neighbors)
            {
                if (!mp.count(nbr))
                {
                    q.push(nbr);
                    mp[nbr] = new Node(nbr->val);
                }
                mp[temp]->neighbors.push_back(mp[nbr]);
            }
        }

        return mp[node];
    }
};