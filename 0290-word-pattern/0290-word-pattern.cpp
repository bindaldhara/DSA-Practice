class Solution {
public:
    bool wordPattern(string pattern, string s) {
        if(pattern.size()-1!=(count(s.begin(), s.end(), ' ')))
             return false;

        unordered_map<char,string> m;
        unordered_map<string,char> n;
        stringstream str(s); 
        string word;
        for(auto i:pattern){
            str >> word;
            if((m[i] == "" && n[word] == 0)){
                m[i] = word;
                n[word] = i;
            }
            else if(m[i] == word){
                continue;
            }
            else
                return false;
        }
        return true;
    }
};