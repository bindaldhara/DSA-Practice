class Solution {
public:
     bool same(char a1[],char a2[]){
        for(int i=0;i<256;i++){
            if(a1[i]!=a2[i])
                return false;
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        int n = p.length();
        if(s.length()<n){
            vector<int> a;
            return a;
        }
        char pat[256]={0};
        char txt[256]={0};
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            pat[p[i]]++;
            txt[s[i]]++;
        }
        
        for(int i=n;i<s.length();i++){
            if(same(pat,txt)){
                int ind = i-n;
                ans.push_back(ind);
            }
            
            txt[s[i]]++;
            txt[s[i-n]]--;
        }
        
        if(same(pat,txt)){
            int ind = s.length()-n;
            ans.push_back(ind);
        }
        
        return ans;
        
    }
};