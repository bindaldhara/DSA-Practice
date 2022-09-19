class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,vector<string>> map;
        
        for(int i = 0;i<paths.size();i++){
            int j = 0;
            string path = "";
            while(j<paths[i].length() && paths[i][j]!=' '){
                path+=paths[i][j];
                j++;
            }
            while(j<paths[i].length()){
                j++;
                string fileName = "";
                while(j<paths[i].length() && paths[i][j]!='('){
                    fileName+=paths[i][j];
                    j++;
                }
                string content = "";
                j++;
                while(j<paths[i].length() && paths[i][j]!=')'){
                    content+=paths[i][j];
                    j++;
                }
                j++;
                map[content].push_back(path+'/'+fileName);
            }
            
        }
        vector<vector<string>> res;
        for(auto it:map){
            if(it.second.size()>1)
                res.push_back(it.second);
        }
        
        return res;
    }
};