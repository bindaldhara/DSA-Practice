class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int n=strs.size();   
        sort(strs.begin(),strs.end());
        
        string small = strs[0];
        string large = strs[n-1];
        
        for(int i=0;i<small.size();i++){
            if(small[i]!=large[i]) 
                break;
            res+=small[i];
        }
        return res;
    }
};