class Solution {
public:
     void dfs(char ch,vector<char> adjList[],map<char,bool> &mp,char &minchar){
        mp[ch]=true;
        for(auto it=adjList[ch].begin();it!=adjList[ch].end();it++){
           if(mp[*it]==false){
               minchar=min(minchar,*it);
               dfs(*it,adjList,mp,minchar);
            }
       }
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<char> adjList[10000];
        int i;
        for(i=0;i<s1.size();i++){
            adjList[s1[i]].push_back(s2[i]);
            adjList[s2[i]].push_back(s1[i]);
        }
        
        for(i=0;i<baseStr.size();i++){
            char minchar=baseStr[i];
            map<char,bool> mp;
            dfs(baseStr[i],adjList,mp,minchar);
            baseStr[i]=minchar;
        }
        return baseStr;        
     } 
};