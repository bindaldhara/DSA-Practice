class Solution {
public:
    vector<vector<string>> ans;
    
    vector<vector<string>> partition(string s) {
        vector<string> curr;
        check(curr,s);
        return ans;
    }
    
    void check(vector<string> curr,string st){
        if(st.size() == 0)
            ans.push_back(curr);
        
        for(int i = 0;i<st.size();i++){
            string s1 = st.substr(0,i+1);
            string s2 = st.substr(i+1);
            if(isPalindrome(s1)) {
                curr.push_back(s1);
                check(curr,s2);
                curr.pop_back();
            }
        }
        
    }

    bool isPalindrome(string str){
        if(str.size() == 0) 
            return false;
        string s2 = str;
        reverse(str.begin(),str.end());
        return s2.compare(str) == 0;
        
    }
};