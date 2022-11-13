class Solution {
public:
    string reverseWords(string s) {
        vector<string> res;
        string temp = "", final = "";
        for(auto i = 0; i < s.length(); i++){
            if(s[i] == ' ') 
                continue;
            else{
                int j = i;
                for(; s[j] != ' ' && j < s.length(); j++){
                    temp += s[j];
                }
                res.push_back(temp);
                temp = "";
                i = j-1;
            }
        }
        reverse(res.begin(), res.end());
        for(auto i : res){
            final += i;
            final += ' ';
        }
        return final.substr(0,final.length()-1);
    }
};

