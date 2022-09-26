class Solution {
public:
    char findParent(char node,unordered_map<char,char>&parent){
		if(parent[node] == node) 
            return node;
		return parent[node] = findParent(parent[node],parent);
	}

	bool equationsPossible(vector<string>& equations) {
		unordered_map<char,char> parent;
		for(char ch = 'a';ch<='z';ch++){
			parent[ch] = ch;
		}
		for(auto s:equations){
		   if(s[1] == '='){
			   parent[findParent(s[0],parent)] = findParent(s[3],parent);
		   }
		}

		for (string e:equations)
			if (e[1] == '!' && findParent(e[0],parent) == findParent(e[3],parent))
				return false;
		return true;
        
    }
};